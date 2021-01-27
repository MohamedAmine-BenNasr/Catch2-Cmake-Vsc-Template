# If you create new headers/cpp files, add them to these list!
set(HEADER_FILES
  Interpolator.h
)
 
set(SOURCE_FILES
  Interpolator.cpp
)

add_library(cpplib ${SOURCE_FILES} ${HEADER_FILES})
