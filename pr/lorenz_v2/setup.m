clc
clear all

hdlsetuptoolpath('ToolName', 'Altera Quartus II', 'ToolPath', 'C:\intelFPGA\17.0\quartus\bin64\quartus.exe');

h = alterasoc('10.253.17.16','root','cyclonevsoc');

addpath(fullfile(matlabroot,'toolbox','hdlcoder','hdlcoderdemos','customboards','DE1SOC'));

