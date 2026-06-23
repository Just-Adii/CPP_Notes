/*
Rectangle *p;
we created a pointer variable containing garbage data(a wild pointer)
And just writing p.length is wrong since inside p length is not available so we first gotta dereference
 it do get the data stored in the address then we gotta add parenthesis to over come the precedence and 
 that also in short we show by arrow
so either (*p).length or p -> length (arrow is replacement to *(aesterisk) and the parenthesis and dot thing making it easy and quick to do)
*/

#include <iostream>

struct Rectangle
{
int length;
int breadth;
};

int main()
{
    Rectangle r;
    r.length=10;
    r.breadth=5;
    // the above code is a normal object of rectangle data type made and we accessed it's member variables using dot operator

    // pointer to a struct
    Rectangle* p;//created a pointer variable containing garbage data(a wild pointer)
    // since pointer is defined here 
    //to access the members we will use arrow operator
   // p->length = 15;
    //p->breadth = 10;
    //if we give length and breadth a value before dynamic allocation it might cause undefined behaviour
//(*p).length = 20; - could also use this,same thing just too much work so arrow operator was found out 
//------------------------------------------------------------------------------------------------------------------------------------------//
//if we want to put the data in heap then,

    p=(struct Rectangle*) malloc(sizeof(Rectangle));//used in C language
    p ->length =20;
    p ->breadth = 15;

    Rectangle* q;
    q = new Rectangle;//used in Cpp,mean exactly the same thing we meant in C code,just shortened it
    q ->length=25;
    q -> breadth=20;

    std::cout<<p->length<<"\n"<<p->breadth<<"\n"<<q->length<<"\n"<<q ->breadth<<std::endl;

    free (p);
    delete q;
    //above is dynamic allocation of struct Rectangle
    //btw we could have written all of it in one line as well - Recangle *p = (struct Rectangle *)malloc(sizeof(Rectangle)); we
    //are just declaring and assigning at the same time
/*
malloc - a function who's syntax is - void* malloc(size_t* size)
// Meaning: "This function is called malloc. It expects an input variable 
// of data type 'size_t', and inside the function, we will refer to that input as 'size'." ...though no need to write data type inside parenthesis
it's just in the defination that we can put variable of any data type

typecasting is given in another file dedicated to it,basically we converted the space allocated from void pointer to the data type we needed
*/
    return 0;
}