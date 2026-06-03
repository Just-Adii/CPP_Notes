/*
Pointer is a variable which holds an address...an integer

Analogy- Cops(compiler)were told to go to this house down a straight lane(multiple houses in straight lane in straight line-RAM)
That house is named something,in our case it's "ptr" (as per code written down,it can be anything though)
In ptr you'll find no one but a note...in that note will be address of the house called "var" where the murderer 6(the value stored in var)
will be present

That's it...that 1st house ptr is telling the cops the address of 2nd house where 6 is....so 1st house is pointing towards 2nd,holding it's address

That's all a pointer is.

Reason of using asterisk(*)after void....

Let's see this code - int* ptr = &var;
here it says ptr is a pointer pointing to an integer...
But actually pointer does not care what kind of data it is pointing to that's why 
in most of my codes you'll see void* which tells pointer can point to any type of data

Also adding any kind of data type is important in memory,we need to write data type otherwise compiler won't know how much memory to allocate
Therefore we chose to use asterisk after datatype
Therefore we got void* ptr=&var & here is used for address of var
So here, the code says - ptr is a pointer pointing at the address of var(so pointer variable not always can point at anything
if you don't know what type pointer may point than you can use void*)

Note - void* is used when the pointer needs to be generic (type unknown at compile time). 
Typed pointers like int* are preferred otherwise since they allow arithmetic and type checking.

*/
#include <iostream>

#define LOG(x) std::cout<<x<<std::endl

int main()
{
    int var = 6;
   // void* ptr =&var;
   int* ptr = &var;
   *ptr = 10;
   LOG(var);
    std::cout<<&var;

    char* buffer= new char[8];// 1 char is 1 byte - we have allocated 8 bytes
    memset(buffer,0,8);

    delete[] buffer;
    std::cin.get();
    return 0;
}

