
add_library(MathFunctions MathFunctions.cxx)

option(USE_MYMATH ON)

if(USE_MYMATH EQUAL ON)
    target_compile_definitions(MathFunctions USE_MYMATH)
endif()

if(USE_MYMATH EQUAL ON)
    add_library(SqrtLibrary mysqrt.cxx)
endif()

if(USE_MYMATH EQUAL ON)
    target_link_libraries(MathFunctions PUBLIC SqrtLibrary)
endif()
