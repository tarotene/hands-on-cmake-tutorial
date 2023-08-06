add_library(MathFunctions MathFunctions.cxx)

option(USE_MYMATH "Use tutorial provided math implementation" ON)

if(USE_MYMATH)
  target_compile_definitions(MathFunctions PRIVATE "USE_MYMATH")
endif()

if(USE_MYMATH)
  add_library(SqrtLibrary STATIC mysqrt.cxx)
endif()

if(USE_MYMATH)
  target_link_libraries(MathFunctions PUBLIC SqrtLibrary)
endif()
