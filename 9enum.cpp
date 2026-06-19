#include <iostream>

enum Entity
{
    A,B,C//yep no semi colon and by defualt A=0 B=1,C=2 and it continues if we set A=5 let say B automatically is 6,c=7.....
};

int main()
{
    Entity value=A;

    if(value==0)
    {
        std::cout<<"A"<<std::endl;
    }
    return 0;
}
//enum basically groups data