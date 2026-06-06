/*
1.Reference is an Alias(nickname) of variable that has no memory of it's own.


*/
/*#include <iostream>

void log(int a)
{
    a++;
    std::cout<<a<<std::endl;
}

int main()
{
    int a=5;
    log(a);
    
    return 0;

}*//*The above code have a bug

Think you're playing clash of clans - whenever you get more coins /elxir in that game cuz of above code the original coins won't be displayed as
increased but a new coin storage is made and shown in screen until the screen until the code function runs afterwards vanishes
And you always get stuck with same amout of money
That's why pass by value is not great and that's the reason we use pass by reference
The above code...don't even see it as pass by value though it is pass by value but still confusing...don't go on same variable name
they both are completely different 
*/ 
#include <iostream>

void increment(int& value)//& tells you that don't make a new box(new memory space),just make "value" a nickname for what gets passed into
{                         //while log(int a) stated that make a brand new int, copy the value into it, call it "a".
    value++;
}

int main()
{
    int a = 5;
    

    increment(a);
    std::cout<<a<<std::endl;
    return 0;
}

/*
so....nickname is a reference given to someone..like if I'm calling my friend bhai
I am refering to a boy named ayush whom I saay bhai

*/
