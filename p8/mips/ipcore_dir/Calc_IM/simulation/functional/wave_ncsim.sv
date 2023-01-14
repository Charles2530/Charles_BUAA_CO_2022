

 
 
 




window new WaveWindow  -name  "Waves for BMG Example Design"
waveform  using  "Waves for BMG Example Design"

      waveform add -signals /Calc_IM_tb/status
      waveform add -signals /Calc_IM_tb/Calc_IM_synth_inst/bmg_port/CLKA
      waveform add -signals /Calc_IM_tb/Calc_IM_synth_inst/bmg_port/ADDRA
      waveform add -signals /Calc_IM_tb/Calc_IM_synth_inst/bmg_port/DOUTA

console submit -using simulator -wait no "run"
