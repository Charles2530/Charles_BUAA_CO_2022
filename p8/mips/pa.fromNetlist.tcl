
# PlanAhead Launch Script for Post-Synthesis floorplanning, created by Project Navigator

create_project -name mips -dir "D:/coding_file/study/Lesson/co_lesson/lesson/p8/mips/planAhead_run_2" -part xc6slx100fgg676-2
set_property design_mode GateLvl [get_property srcset [current_run -impl]]
set_property edif_top_file "D:/coding_file/study/Lesson/co_lesson/lesson/p8/mips/fpga_top.ngc" [ get_property srcset [ current_run ] ]
add_files -norecurse { {D:/coding_file/study/Lesson/co_lesson/lesson/p8/mips} {ipcore_dir} }
add_files [list {ipcore_dir/Calc_IM.ncf}] -fileset [get_property constrset [current_run]]
add_files [list {ipcore_dir/Counter_IM.ncf}] -fileset [get_property constrset [current_run]]
add_files [list {ipcore_dir/DM_RAM.ncf}] -fileset [get_property constrset [current_run]]
add_files [list {ipcore_dir/Finally_IM.ncf}] -fileset [get_property constrset [current_run]]
add_files [list {ipcore_dir/IM_ROM.ncf}] -fileset [get_property constrset [current_run]]
add_files [list {ipcore_dir/PING_IM.ncf}] -fileset [get_property constrset [current_run]]
add_files [list {ipcore_dir/Test.ncf}] -fileset [get_property constrset [current_run]]
add_files [list {ipcore_dir/Test_counter_IM.ncf}] -fileset [get_property constrset [current_run]]
set_property target_constrs_file "D:/coding_file/study/Lesson/co_lesson/lesson/p8/CO_FPGA_Constraint.ucf" [current_fileset -constrset]
add_files [list {D:/coding_file/study/Lesson/co_lesson/lesson/p8/CO_FPGA_Constraint.ucf}] -fileset [get_property constrset [current_run]]
link_design
