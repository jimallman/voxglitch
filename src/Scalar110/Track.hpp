namespace scalar_110
{

struct Track
{
  bool steps[NUMBER_OF_STEPS] = {0,0,0,0, 0,0,0,0, 0,0,0,0, 0,0,0,0};
  unsigned int playback_position = 0;
  SamplePlaybackSettings sample_playback_settings[NUMBER_OF_STEPS];
  float volume = .5;
  float pan = .5;
  StereoPanSubModule stereo_pan_submodule;

  SamplePlayer sample_player;

  Track()
  {
    volume = getVolume(playback_position);
  }

  void step()
  {
    playback_position = (playback_position + 1) % NUMBER_OF_STEPS;

    //
    // TODO: possibly send over a pointer to ALL of the step parameters
    //       and copy them locally in the sample_player?

    if (steps[playback_position])
    {
      // trigger sample playback
      volume = getVolume(playback_position);
      pan = getPan(playback_position);
      
      sample_player.trigger(this->sample_playback_settings[playback_position].offset);
    }
  }

  unsigned int getPosition()
  {
    return(playback_position);
  }

  void setPosition(unsigned int playback_position)
  {
    if(playback_position < NUMBER_OF_STEPS)
    {
      this->playback_position = playback_position;
    }
  }

  void toggleStep(unsigned int i)
  {
    steps[i] ^= true;
  }

  bool getValue(unsigned int i)
  {
    return(steps[i]);
  }

  void setValue(unsigned int i, bool value)
  {
    steps[i] = value;
  }

  void reset()
  {
    playback_position = 0;
  }

  std::pair<float, float> getStereoOutput()
  {
    float left_output;
    float right_output;

    // Read sample output and return
    std::tie(left_output, right_output) = this->sample_player.getStereoOutput();

    float centered_pan = (this->pan * 2.0) - 1.0;
    std::tie(left_output, right_output) = stereo_pan_submodule.process(left_output, right_output, centered_pan);

    left_output *= (volume * 2);  // Range from 0 to 2 times normal volume
    right_output *= (volume * 2);  // Range from 0 to 2 times normal volume

    return { left_output, right_output };
  }


  //
  // Offset
  //
  float getOffset(unsigned int selected_step) {
    return(this->sample_playback_settings[selected_step].offset);
  }
  void setOffset(unsigned int selected_step, float offset) {
    this->sample_playback_settings[selected_step].offset = offset;
  }

  //
  // Volume
  //
  float getVolume(unsigned int selected_step) {
    return(this->sample_playback_settings[selected_step].volume);
  }
  void setVolume(unsigned int selected_step, float volume) {
    this->sample_playback_settings[selected_step].volume = volume;
  }

  //
  // Pan
  //
  float getPan(unsigned int selected_step)  {
    return(this->sample_playback_settings[selected_step].pan);
  }
  void setPan(unsigned int selected_step, float pan)  {
    this->sample_playback_settings[selected_step].pan = pan;
  }

};

}
