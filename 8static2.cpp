#include <iostream>

struct Entity
{
  static int x,y;
static void Print()
{
    std::cout<<x<<" "<<y<<"\n";
}
};
int Entity::x;// :: - Scope Resolution Operator - it tells the compiler exactly where 
int Entity::y;//(in what scope) to look for a variable, function, class, or struct.


int main()
{
    
    Entity::x=2;
    Entity::y=3;

   // Entity e2;
    //e2.x=5;
    //e2.y=30;
    Entity::Print();
    //e2.Print();
    std::cin.get();
    return 0;
}
/*
-------------------------------------------STATIC BENIFIT--------------------------------------------------

When you want a single piece of data to be shared, synchronized, and globally 
accessible by every single instance of that class, you make it static.

in class when we write "static int x,y;" we tell compiler x,y exists but memory is not allocated yet
But when after class we write globally (only after class ends)"int Entity::x" we basically write
that allocate x memory so that it can hold integer...and now howver many objects we make "one or one thousand"
ALL WILL USE SAME MEMORY ADDRESS FOR EVERYTHING.

In the above code...try this by removing the comment lines,when only one object "e" is present it makes x=2 and y=3
But when e2 comes,and modiefies "e" by changing value of x to 5 and y to 30 for non static it should do it with another 
copy of x and y but it's not doing it's changing the one and only memory.

THEREFORE IF THEY WERE NON STATIC ANS FOE E.PRINT() AND E2.PRINT WOULD BE "2 3 
                                                                           5 30"
BUT for static variable it's "5 30
                              5 30"

Therefore remember..for non static funtion if there's thousand instances ie thousand objects of class than a thousand memory 
will be allocated for each instance but for static only one memory will do it.
----------------------------------------------------------------------------------------------------------------

*/