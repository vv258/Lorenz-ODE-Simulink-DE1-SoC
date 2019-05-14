# request TCL package from ACDS 13.1
package require -exact qsys 13.1

# module lorenz_mo_ip
set_module_property DESCRIPTION ""
set_module_property NAME lorenz_mo_ip
set_module_property VERSION 1.0
set_module_property INTERNAL false
set_module_property OPAQUE_ADDRESS_MAP true
set_module_property GROUP "HDL Coder Generated IP"
set_module_property AUTHOR ""
set_module_property DISPLAY_NAME lorenz_mo_ip
set_module_property INSTANTIATE_IN_SYSTEM_MODULE true
set_module_property EDITABLE true
set_module_property ANALYZE_HDL AUTO
set_module_property REPORT_TO_TALKBACK false
set_module_property ALLOW_GREYBOX_GENERATION false

# documentation
set docprefix file:///
add_documentation_link "DATASHEET" [append docprefix [get_module_property MODULE_DIRECTORY] /doc/lorenz_model_ip_core_report.html]

# file sets
add_fileset QUARTUS_SYNTH QUARTUS_SYNTH "" ""
set_fileset_property QUARTUS_SYNTH TOP_LEVEL lorenz_mo_ip
set_fileset_property QUARTUS_SYNTH ENABLE_RELATIVE_INCLUDE_PATHS false
add_fileset_file lorenz_mo_ip_src_Lorenz_FPGA_system.v VERILOG PATH hdl/lorenz_mo_ip_src_Lorenz_FPGA_system.v 
add_fileset_file lorenz_mo_ip_dut.v VERILOG PATH hdl/lorenz_mo_ip_dut.v 
add_fileset_file lorenz_mo_ip_SimpleDualPortRAM_generic.v VERILOG PATH hdl/lorenz_mo_ip_SimpleDualPortRAM_generic.v 
add_fileset_file lorenz_mo_ip_rdfifo_data_classic.v VERILOG PATH hdl/lorenz_mo_ip_rdfifo_data_classic.v 
add_fileset_file lorenz_mo_ip_rdfifo_data.v VERILOG PATH hdl/lorenz_mo_ip_rdfifo_data.v 
add_fileset_file lorenz_mo_ip_SimpleDualPortRAM_singlebit.v VERILOG PATH hdl/lorenz_mo_ip_SimpleDualPortRAM_singlebit.v 
add_fileset_file lorenz_mo_ip_rdfifo_last_classic.v VERILOG PATH hdl/lorenz_mo_ip_rdfifo_last_classic.v 
add_fileset_file lorenz_mo_ip_rdfifo_last.v VERILOG PATH hdl/lorenz_mo_ip_rdfifo_last.v 
add_fileset_file lorenz_mo_ip_rdfifo_rid_classic.v VERILOG PATH hdl/lorenz_mo_ip_rdfifo_rid_classic.v 
add_fileset_file lorenz_mo_ip_rdfifo_rid.v VERILOG PATH hdl/lorenz_mo_ip_rdfifo_rid.v 
add_fileset_file lorenz_mo_ip_axi4_module.v VERILOG PATH hdl/lorenz_mo_ip_axi4_module.v 
add_fileset_file lorenz_mo_ip_addr_decoder.v VERILOG PATH hdl/lorenz_mo_ip_addr_decoder.v 
add_fileset_file lorenz_mo_ip_axi4.v VERILOG PATH hdl/lorenz_mo_ip_axi4.v 
add_fileset_file lorenz_mo_ip.v VERILOG PATH hdl/lorenz_mo_ip.v TOP_LEVEL_FILE

# connection point ip_clk
add_interface ip_clk clock end
set_interface_property ip_clk clockRate 0
set_interface_property ip_clk ENABLED true
set_interface_property ip_clk EXPORT_OF ""
set_interface_property ip_clk PORT_NAME_MAP ""
set_interface_property ip_clk CMSIS_SVD_VARIABLES ""
set_interface_property ip_clk SVD_ADDRESS_GROUP ""
add_interface_port ip_clk IPCORE_CLK clk Input 1

# connection point ip_rst
add_interface ip_rst reset end
set_interface_property ip_rst associatedClock ip_clk
set_interface_property ip_rst synchronousEdges DEASSERT
set_interface_property ip_rst ENABLED true
set_interface_property ip_rst EXPORT_OF ""
set_interface_property ip_rst PORT_NAME_MAP ""
set_interface_property ip_rst CMSIS_SVD_VARIABLES ""
set_interface_property ip_rst SVD_ADDRESS_GROUP ""
add_interface_port ip_rst IPCORE_RESETN reset_n Input 1

## AXI4 Bus
# connection point axi_clk
add_interface axi_clk clock end
set_interface_property axi_clk clockRate 0
set_interface_property axi_clk ENABLED true
set_interface_property axi_clk EXPORT_OF ""
set_interface_property axi_clk PORT_NAME_MAP ""
set_interface_property axi_clk CMSIS_SVD_VARIABLES ""
set_interface_property axi_clk SVD_ADDRESS_GROUP ""
add_interface_port axi_clk AXI4_ACLK clk Input 1

# connection point axi_reset
add_interface axi_reset reset end
set_interface_property axi_reset associatedClock axi_clk
set_interface_property axi_reset synchronousEdges DEASSERT
set_interface_property axi_reset ENABLED true
set_interface_property axi_reset EXPORT_OF ""
set_interface_property axi_reset PORT_NAME_MAP ""
set_interface_property axi_reset CMSIS_SVD_VARIABLES ""
set_interface_property axi_reset SVD_ADDRESS_GROUP ""
add_interface_port axi_reset AXI4_ARESETN reset_n Input 1

# connection point s_axi
add_interface s_axi axi4 end
set_interface_property s_axi associatedClock axi_clk
set_interface_property s_axi associatedReset axi_reset
set_interface_property s_axi readAcceptanceCapability 1
set_interface_property s_axi writeAcceptanceCapability 1
set_interface_property s_axi combinedAcceptanceCapability 1
set_interface_property s_axi readDataReorderingDepth 1
set_interface_property s_axi bridgesToMaster ""
set_interface_property s_axi ENABLED true
set_interface_property s_axi EXPORT_OF ""
set_interface_property s_axi PORT_NAME_MAP ""
set_interface_property s_axi CMSIS_SVD_VARIABLES ""
set_interface_property s_axi SVD_ADDRESS_GROUP ""
add_interface_port s_axi AXI4_AWID awid Input 12
add_interface_port s_axi AXI4_AWADDR awaddr Input 16
add_interface_port s_axi AXI4_AWLEN awlen Input 8
add_interface_port s_axi AXI4_AWSIZE awsize Input 3
add_interface_port s_axi AXI4_AWBURST awburst Input 2
add_interface_port s_axi AXI4_AWLOCK awlock Input 1
add_interface_port s_axi AXI4_AWCACHE awcache Input 4
add_interface_port s_axi AXI4_AWPROT awprot Input 3
add_interface_port s_axi AXI4_AWVALID awvalid Input 1
add_interface_port s_axi AXI4_WDATA wdata Input 32
add_interface_port s_axi AXI4_WSTRB wstrb Input 4
add_interface_port s_axi AXI4_WLAST wlast Input 1
add_interface_port s_axi AXI4_WVALID wvalid Input 1
add_interface_port s_axi AXI4_BREADY bready Input 1
add_interface_port s_axi AXI4_ARID arid Input 12
add_interface_port s_axi AXI4_ARADDR araddr Input 16
add_interface_port s_axi AXI4_ARLEN arlen Input 8
add_interface_port s_axi AXI4_ARSIZE arsize Input 3
add_interface_port s_axi AXI4_ARBURST arburst Input 2
add_interface_port s_axi AXI4_ARLOCK arlock Input 1
add_interface_port s_axi AXI4_ARCACHE arcache Input 4
add_interface_port s_axi AXI4_ARPROT arprot Input 3
add_interface_port s_axi AXI4_ARVALID arvalid Input 1
add_interface_port s_axi AXI4_RREADY rready Input 1
add_interface_port s_axi AXI4_AWREADY awready Output 1
add_interface_port s_axi AXI4_WREADY wready Output 1
add_interface_port s_axi AXI4_BID bid Output 12
add_interface_port s_axi AXI4_BRESP bresp Output 2
add_interface_port s_axi AXI4_BVALID bvalid Output 1
add_interface_port s_axi AXI4_ARREADY arready Output 1
add_interface_port s_axi AXI4_RID rid Output 12
add_interface_port s_axi AXI4_RDATA rdata Output 32
add_interface_port s_axi AXI4_RRESP rresp Output 2
add_interface_port s_axi AXI4_RLAST rlast Output 1
add_interface_port s_axi AXI4_RVALID rvalid Output 1

