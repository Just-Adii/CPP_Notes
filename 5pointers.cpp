
/*
---
ANYTHING EXTERNAL TO A PROGRAM NEEDS A POINTER TO BE ACCESSED,BE IT HEAP OR FILE OR HARDWARE LIKE KEYBOARD,MONITER,INTERNET/NETWORK CONNECTION
ALL THESE NEEDS POINTER(Only difference b/w accessing memory through a pointer and hardware is the pointer type...memory access require 
memory pointer while the hardware requires opaque pointer)

In short - PARAMETER CAN USED TO ACCESS
- MEMORY
- RESOURCES
- can also be used to pass PARAMETERS
---
*/


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
/*
-------------------------------------------------VVI FOR POINTERS--------------------------------------------------------------

Let's take an example - 

const char* name = "Cherno"

When we wrote this it means a variable there's a memory allocated named "name" and it stores the address which is holding the data passed to
the memory which is "Cherno"...pointer takes 4 bytes of memory in a 32 bit system and 8 byte in 64 bits

Now when we go to memory and search name it won't show the Chrno stored in hex or decimal across 8 bits(char is 1 byte ie 8 bits)
it will show an address let's say "0x004A2F10" this is a standard address occupying 32 bits

how do I know - reason 
1. "0x" symbol denotes whatever is after me is hexadecimal(base 16)
2.hexadecial basically is 16 so it goes from 1-9 and A-F total 16 unique symbols so seeing an F we can guess though still better to guess from 0x
now 1 hexadecimal value occupy 4 bits and in the address
004A2F10 we have 8 characters ie total 8*4 = 32 bits of memory

So a pointer generally takes 4 bytes (32 bits space) (2^32 addresses can be stored in a pointer ewhich is around 4 billion)

and the address stored in pointer when we search that in memory then we reach the address where the actual data is stored in ascii character
to know it better go to my Arm_x86 file it covers this same topic more inclined with memory

---know this for now-----

const char* name ="data"; - name is a pointer taking 4 bytes of data in a memory and using it to store address and that addrress when searched in 
memory is the actual location of the data stored in the memory.
--------------------------------------------------------------------------------------------------------------------------------
*/
/*
 If you're confused in asterisk part read this

int a = 10;
int *p;
p=&a;
cout<<p;//will just print address stored in pointer
cout<<*p;//(dereferencing)

DEREFERENCING - Takes the value/data stored inside the address pointer is pointing to

Thus - (*) aesterisk is used only when declaring and dereferencing the pointer,none other time
*/