add_executable(KhaosVersion.example KhaosVersion.cpp)
target_link_libraries(KhaosVersion.example PRIVATE Khaos::Khaos)
add_test(NAME KhaosVersion.example COMMAND KhaosVersion.example)

add_executable(Compiler.example Compiler.cpp)
target_link_libraries(Compiler.example PRIVATE Khaos::Khaos)
add_test(NAME Compiler.example COMMAND Compiler.example)
