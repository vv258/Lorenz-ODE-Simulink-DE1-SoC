package require -exact qsys 13.1
load_system system_soc.qsys
set HDLCODERIPINST Subsystem_ip_0
add_instance ${HDLCODERIPINST} Subsystem_ip 1.0
add_connection pll_0.outclk0 ${HDLCODERIPINST}.ip_clk
add_connection hps_0.h2f_reset ${HDLCODERIPINST}.ip_rst
set_instance_parameter_value pll_0 {gui_output_clock_frequency0} {50.000000}
add_connection hps_0.h2f_axi_master ${HDLCODERIPINST}.s_axi
set_connection_parameter_value hps_0.h2f_axi_master/${HDLCODERIPINST}.s_axi baseAddress {0x0000}
add_connection pll_0.outclk0 ${HDLCODERIPINST}.axi_clk
add_connection hps_0.h2f_reset ${HDLCODERIPINST}.axi_reset
# connection point ${HDLCODERIPINST}_SW
add_interface ${HDLCODERIPINST}_SW conduit end
set_interface_property ${HDLCODERIPINST}_SW EXPORT_OF ${HDLCODERIPINST}.SW

validate_system
save_system system_soc.qsys
