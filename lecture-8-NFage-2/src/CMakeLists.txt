add_library(point_distance point_distance.c)
target_link_libraries(point_distance m)

add_executable(menu menu.c)

add_executable(exercise-PSPDC-391-7 exercise-PSPDC-391-7.c)
target_link_libraries(exercise-PSPDC-391-7 m)

add_library(time_calc time_calc.c)
target_link_libraries(time_calc m)

