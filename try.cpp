#include <iostream>
struct Entity
{
  static int x,y;
void Print()
{

}
};
int Entity::x;
int Entity::y;

int main()
{
    Entity e;
    e.x=2;
    e.y=3;
    std::cout<<e.x<<" "<<e.y;
    std::cin.get();
    return 0;
}