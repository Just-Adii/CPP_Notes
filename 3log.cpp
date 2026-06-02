#include <iostream>

void log(const char* message);

void Initlog()
{
    log("initializing log");
}
void log(const char* message)
{
    std::cout<< message <<std::endl;
}