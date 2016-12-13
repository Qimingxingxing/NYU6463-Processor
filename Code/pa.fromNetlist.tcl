
# PlanAhead Launch Script for Post-Synthesis floorplanning, created by Project Navigator

create_project -name GUOYUANFPGA -dir "F:/FPGA/GUOYUANFPGA/planAhead_run_3" -part xc7a100tcsg324-3
set_property design_mode GateLvl [get_property srcset [current_run -impl]]
set_property edif_top_file "F:/FPGA/GUOYUANFPGA/topdesign.ngc" [ get_property srcset [ current_run ] ]
add_files -norecurse { {F:/FPGA/GUOYUANFPGA} }
set_property target_constrs_file "final.ucf" [current_fileset -constrset]
add_files [list {final.ucf}] -fileset [get_property constrset [current_run]]
link_design
