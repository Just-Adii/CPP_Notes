#pragma once


#include "3log.h"//let say we have to put different declarations in different file and this header file with different declaration contains the 
                //3Log.h header file as well...now when we'll include both 3Log.h and 3common.h in our main 3headerfile.cpp
                //we'll get an error which will say multiple declarations for same function/class; that issue is solved by using
                // #pragma once where since # is before pragma it is obviously preprocessor directive which makes sure
                //once the 3log.h is already pasted it doesn't paste it again avoiding error

#include "3log2.h"