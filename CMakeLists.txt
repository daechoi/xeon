cmake_minimum_required(VERSION 3.10)

list(APPEND CMAKE_MODULE_PATH "${CMAKE_CURRENT_LIST_DIR}/cmake/modules/")
include(ReadVersion)
get_xeon_version(xeon_VERSION)
project(xeon 
  VERSION ${xeon_VERSION}
  DESCRIPTION "Next-gen Postgres for Cloud"
  HOMEPAGE_URL https://crystal.cloud/
  LANGUAGES CXX C ASM
  )


