#pragma once //header guard - prevents us from including a single header file multiple times into a single translation unit (single cpp file)
            //in simple - if preprocessor have pasted the file once,it saves it's address in memory and if again it have to be pasted it skips it

void log(const char* message);
void Initlog();

/*
complete logic of #prama once
*The "First Time" the Preprocessor Sees log.h

    The preprocessor reads your main.cpp file from top to bottom.

    It hits the first #include "log.h".

    It opens log.h, sees #pragma once at the very top, and makes a mental note of this file's path (e.g., "I have now looked at log.h").

    It copies and pastes the entire contents of log.h directly into main.cpp.

*The "Second Time" (The Skip)

    The preprocessor continues down main.cpp and hits a second #include "log.h" (perhaps included indirectly through another header file).

    It looks at log.h again, but before pasting anything, it checks its notes.

    It says, "Wait, I already processed this exact file path earlier."

    Because of #pragma once, the preprocessor completely ignores and skips the second #include line. It does not paste the code a second time.*/