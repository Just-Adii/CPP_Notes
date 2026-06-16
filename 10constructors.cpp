#include <iostream>

class Entity
{
public:
float X,Y;

Entity()
{
    X=0;
    Y=5;
}

void Print()
{
    std::cout<<X<<", "<<Y<<std::endl;
}

};

int main()
{
    Entity e;
    e.Print();
    return 0;
}
/*
Undefined Behavior
The most dangerous kind of bug in C++ —

because your program thinks it's working fine while doing completely wrong things silently.

Let's say in a game HP is 100 and your bullet reduces 10 hp everytime it hits...what if it stored a garbage value..the bullet.....
then it will be something like 3.48e-039 and the enemy will die at once which is undefined behaviour...that's why we need to assisgn
or initialize the memory value as zero or our requirement.

I even had a question on this about providing discount in grocessary shop based on conditions
But by default,for all discount should be 5%...and I didn't do it since I didn't know such simple thing

*/