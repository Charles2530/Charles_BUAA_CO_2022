
 
 
 




window new WaveWindow  -name  "Waves for BMG Example Design"
waveform  using  "Waves for BMG Example Design"


      waveform add -signals /p8_test_tb/status
      waveform add -signals /p8_test_tb/p8_test_synth_inst/bmg_port/CLKA
      waveform add -signals /p8_test_tb/p8_test_synth_inst/bmg_port/ADDRA
      waveform add -signals /p8_test_tb/p8_test_synth_inst/bmg_port/DOUTA
console submit -using simulator -wait no "run"
