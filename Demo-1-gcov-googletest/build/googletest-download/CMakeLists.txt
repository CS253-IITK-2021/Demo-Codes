cmake_minimum_required(VERSION 2.8.12)

project(googletest-download NONE)

include(ExternalProject)
ExternalProject_Add(googletest
  GIT_REPOSITORY    https://github.com/google/googletest.git
  GIT_TAG           master
  SOURCE_DIR        "/home/ha-useast-service/Documents/IIT Kanpur/Demo-Codes/build/googletest-src"
  BINARY_DIR        "/home/ha-useast-service/Documents/IIT Kanpur/Demo-Codes/build/googletest-build"
  CONFIGURE_COMMAND ""
  BUILD_COMMAND     ""
  INSTALL_COMMAND   ""
  TEST_COMMAND      ""
)
