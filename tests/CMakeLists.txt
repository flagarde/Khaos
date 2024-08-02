if(Khaos_IS_TOP_LEVEL)
  include(CTest)
  mark_as_advanced(BUILD_TESTING)
endif()

add_subdirectory(compiler)
