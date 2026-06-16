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
struct Entity2
{
int a,b;
};

int main()
{
    Entity e1;
    Entity e3;
    Entity2 e2;
    Entity2 e4;
    e2.a=2; e2.b=2; 
    
    Entity::x=2;
    Entity::y=3;
    
    std::cout<<"Size of Entity Struct is:"<<sizeof(Entity)<<" Bytes"<<"\nSize of Entity2 struct is:"<<sizeof(Entity2)<<" Bytes";
    
    
    std::cin.get();
    return 0;
}
/*
Above You'll see when you run the program the size of Entity structure is 1 Byte only..ie it double downs
When we make static variable memory is not allocated
but for non static the memory is allocated when it's declared in the class
*/