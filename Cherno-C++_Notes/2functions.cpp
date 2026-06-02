#include <iostream>

//funtions main use is to avoid code copying which managess large code better and reduce errors.That's it
//we do it by just writing a function and calling it wherever we want.

void multiply()//no return value no parameter
{
    std::cout<<5*6<<std::endl;
}
void multiply(int a, int b)//no return value but parameter present
{
    std::cout<<a*b<<std::endl;
}

int multiply(float a,float b)//return type and parameter
{
    return a*b;   
}

//also used funtion overloading here where same name funtion is used but since parameter is different compiler can differentiate during run time
//which funtion is being called and give result accordingly...this is called compile time polymorphism as well

int main()
{
    multiply();
    multiply(7,14);
    multiply(4.5,10);
    return 0;
}