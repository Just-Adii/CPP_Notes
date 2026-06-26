#include <iostream>
#include <string>
class Entity
{
private:
std::string m_Name;
int x,y,z;

public:
Entity()
    : m_Name("Unknown"),x(0),y(0),z(0) // this is member initializer list this prevents copying of vairable and better clarity of code
{

}

Entity(const std::string& name)
    :m_Name(name)
{

}
const std::string& getName() const {return m_Name;}
};

int main()
{
    Entity e0;
    e0.getName();
    Entity e1("Cherno");
    e1.getName();
    std::cout<<e0.getName()<<"\n"<<e1.getName()<<std::endl;
    return 0;
}