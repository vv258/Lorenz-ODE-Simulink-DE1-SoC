package require -exact qsys 13.1
load_system system_soc.qsys
set HDLCODERIPINST Subsystem_ip_0
set_project_property deviceFamily "Cyclone V"
set_project_property device "5CSEMA5F31C6"
validate_system
save_system system_soc.qsys
