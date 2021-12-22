struct MenuItemLoadBank : MenuItem
{
	WavBankMC *wav_bank_mc_module;

	void onAction(const event::Action &e) override
	{
		const std::string dir = wav_bank_mc_module->rootDir;
		char *path = osdialog_file(OSDIALOG_OPEN_DIR, dir.c_str(), NULL, NULL);

		if (path)
		{
			wav_bank_mc_module->load_samples_from_path(path);
			wav_bank_mc_module->path = path;
			free(path);
		}
	}
};
