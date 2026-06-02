#include <iostream>
#include "3log.h"
#include "3common.h"

int main()
{
    Initlog();
    log("Hello World");
    std::cin.get();
    return 0;
}
/*

Why in some header files we use <> but in some we use " "?

Ans-    when we have header file in same folder we use quotes telling preprocessor to look only in active folder 
        but iostream is not in our working folder,then we use angular bracket telling the preprocessor to 
        check in compiler's system folder ie compliler toolchain 
        for eg.- my compiler system files(visual studio based) which contains all header files address is
        C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Tools\MSVC\14.44.35207\include - you'll find all header files here

When you use angle brackets (< >), it is a strict, one-way street:

    It checks only the compiler toolchain folders. If it doesn't find the file there, 
    it instantly throws an error. It never looks in your local project folder.

    When you use quotes (" "), it is actually a two-step fallback system:

    Step 1: It checks your current local project folder first.
    Step 2 (The Fallback): If it cannot find the file in your local project folder,
     it doesn't give up immediately! It automatically switches over and searches the
     compiler toolchain folders, just like angle brackets do.
*/
