static int S_Variable=5;
//int S_Variable=5;

/*
Try compiling this and 8static.cpp file together(g++ 8static.cpp 8s_var.cpp)
....you'll see when we use 1st line and 2nd line is commented out there will be no compilation error
ut when 2nd line is in use and 1st line is commented out we'll see linker error popping up stating
"multiple definition of `S_Variable'".....what does this mean

It means this time the file is linked,it found two definations of S_Variable one conataining value 10 and other 5
..though value doesn't matter,if both are 10 then as well it'll cause error since defining the variable twice means storing
A variable of same name in two different memory addresses...this cnofuses the linker while linking and it gives error instead of linking
-----------------------------------------------------------------------------------------------------------------------------------------------
In simple words: 
When static is used,the above variable became invisible to linker,resulting in no error
But without static it confuses linker resulting in linker throwing error
-----------------------------------------------------------------------------------------------------------------------------------------------
Basically....when we use static...the object sticks only to the file it's inside...it doesn't link to other
Thus,here only one variable named S
*/