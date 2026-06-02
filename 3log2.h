#ifndef _3LOG2_H
#define _3LOG2_H
void func1();
void func2();//just created for timepass both the function to tell manytimes we have diff declaration in diff files which 
            //we might connect to common

#endif

/*
ifndef - IF NOT DEFINED...includes the things written before endif if the defination is not defined till now
ie - if log.h is not pasted till now in main file it will paste the log.h file here since we used #define log.h
as programmer convention for these matters we write _FILENAME_H(underscore-file name-(underscore replacing dot)-extension in capital)
if the file is already pasted the code underneath ifndef will be skipped and won't be ran and directly we go to endif
endif is nothing but tells from ifndef till endif all codes in b/w run based on condition
*/