struct HazumiWidget : VoxglitchModuleWidget
{
  HazumiWidget(Hazumi* module)
  {
    setModule(module);
    setPanel(APP->window->loadSvg(asset::plugin(pluginInstance, "res/hazumi/hazumi_front_panel.svg")));

    // Load up the background PNG and add it to the panel
    PNGPanel *png_panel = new PNGPanel("res/hazumi/hazumi_baseplate.png", 5.08 * 17, 128.5);
    addChild(png_panel);

    addInput(createInputCentered<VoxglitchInputPort>(Vec(223.500000,41.499992), module, Hazumi::STEP_INPUT));
    addInput(createInputCentered<VoxglitchInputPort>(Vec(223.500000,92.250000), module, Hazumi::RESET_INPUT));

    addOutput(createOutputCentered<VoxglitchOutputPort>(Vec(229.750000,145.100006), module, Hazumi::GATE_OUTPUT_1));
    addOutput(createOutputCentered<VoxglitchOutputPort>(Vec(229.750000,174.400024), module, Hazumi::GATE_OUTPUT_2));
    addOutput(createOutputCentered<VoxglitchOutputPort>(Vec(229.750000,203.750031), module, Hazumi::GATE_OUTPUT_3));
    addOutput(createOutputCentered<VoxglitchOutputPort>(Vec(229.750000,233.000000), module, Hazumi::GATE_OUTPUT_4));
    addOutput(createOutputCentered<VoxglitchOutputPort>(Vec(229.750000,262.568787), module, Hazumi::GATE_OUTPUT_5));
    addOutput(createOutputCentered<VoxglitchOutputPort>(Vec(229.750000,292.013977), module, Hazumi::GATE_OUTPUT_6));
    addOutput(createOutputCentered<VoxglitchOutputPort>(Vec(229.750000,321.304443), module, Hazumi::GATE_OUTPUT_7));
    addOutput(createOutputCentered<VoxglitchOutputPort>(Vec(229.750000,350.698181), module, Hazumi::GATE_OUTPUT_8));

    HazumiSequencerDisplay *hazumi_sequencer_display = new HazumiSequencerDisplay();
    hazumi_sequencer_display->box.pos = Vec(21.250000,21.000000);
    hazumi_sequencer_display->module = module;
    addChild(hazumi_sequencer_display);
  }

  struct TriggerOptionValueItem : MenuItem {
    Hazumi *module;
    int option = 0;
    int column = 0;

    void onAction(const event::Action &e) override {
      if(column >= 0)
      {
        module->hazumi_sequencer.trigger_options[column] = option;
      }
      else
      {
        for(unsigned int i=0; i < 8; i++)
        {
          module->hazumi_sequencer.trigger_options[i] = option;
        }
      }
    }
  };

  struct TriggerOptionMenuItem : MenuItem {
    Hazumi *module;
    int column = 0;

    Menu *createChildMenu() override {
      Menu *menu = new Menu;

      // trigger location == 0 (bottom) is default
      TriggerOptionValueItem *trigger_option_value_item_0 = createMenuItem<TriggerOptionValueItem>(module->trigger_options_names[TRIGGER_AT_BOTTOM], CHECKMARK(module->hazumi_sequencer.trigger_options[this->column] == 0));
      trigger_option_value_item_0->module = module;
      trigger_option_value_item_0->option = TRIGGER_AT_BOTTOM;
      trigger_option_value_item_0->column = this->column;
      menu->addChild(trigger_option_value_item_0);

      TriggerOptionValueItem *trigger_option_value_item_1 = createMenuItem<TriggerOptionValueItem>(module->trigger_options_names[TRIGGER_AT_TOP], CHECKMARK(module->hazumi_sequencer.trigger_options[this->column] == 1));
      trigger_option_value_item_1->module = module;
      trigger_option_value_item_1->option = TRIGGER_AT_TOP;
      trigger_option_value_item_1->column = this->column;
      menu->addChild(trigger_option_value_item_1);

      TriggerOptionValueItem *trigger_option_value_item_2 = createMenuItem<TriggerOptionValueItem>(module->trigger_options_names[TRIGGER_AT_BOTH], CHECKMARK(module->hazumi_sequencer.trigger_options[this->column] == 2));
      trigger_option_value_item_2->module = module;
      trigger_option_value_item_2->option = TRIGGER_AT_BOTH;
      trigger_option_value_item_2->column = this->column;
      menu->addChild(trigger_option_value_item_2);

      return menu;
    }
  };

  struct SequencerItemAll : MenuItem {
    Hazumi *module;

    Menu *createChildMenu() override {
      Menu *menu = new Menu;

      TriggerOptionMenuItem *trigger_option_menu_item = createMenuItem<TriggerOptionMenuItem>("Trigger Location", RIGHT_ARROW);
      trigger_option_menu_item->column = -1; // -1 means "all" in this context
      trigger_option_menu_item->module = module;
      menu->addChild(trigger_option_menu_item);

      return menu;
    }
  };

  struct SequencerItem : MenuItem {
    Hazumi *module;
    unsigned int column = 0;

    Menu *createChildMenu() override {
      Menu *menu = new Menu;

      TriggerOptionMenuItem *trigger_option_menu_item = createMenuItem<TriggerOptionMenuItem>("Trigger Location", RIGHT_ARROW);
      trigger_option_menu_item->column = this->column;
      trigger_option_menu_item->module = module;
      menu->addChild(trigger_option_menu_item);

      return menu;
    }
  };

  void appendContextMenu(Menu *menu) override
  {
    Hazumi *module = dynamic_cast<Hazumi*>(this->module);
    assert(module);

    // Menu in development
    menu->addChild(new MenuEntry); // For spacing only
    menu->addChild(createMenuLabel("Column Settings"));

    SequencerItem *all_sequencer_items = createMenuItem<SequencerItem>("All Columns", RIGHT_ARROW);
    all_sequencer_items->module = module;
    all_sequencer_items->column = -1; // -1 means "all columns"
    menu->addChild(all_sequencer_items);

    // Add individual sequencer settings
    SequencerItem *sequencer_items[8];

    for(unsigned int i=0; i < 8; i++)
    {
      sequencer_items[i] = createMenuItem<SequencerItem>("Column #" + std::to_string(i + 1), RIGHT_ARROW);
      sequencer_items[i]->module = module;
      sequencer_items[i]->column = i;
      menu->addChild(sequencer_items[i]);
    }

  }

};
