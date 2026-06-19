#include <iostream>

int S_Variable = 10;
//extern int S_Variable; - this finds S_Variable in other file,thus when linker sees S_Variable in other file it links and prints it's value
//if we wouldn't have used extern
int main()
{
    std::cout<<S_Variable;
    return 0;
}