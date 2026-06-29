#include <iostream>
#include <string>

class Entity
{
private:
    std::string m_name;
    mutable int m_DebugCount=0;
public:
    const std::string& GetName() const // & = returns original m_Name's address, no copy created in memory
                                    // const before = caller can read but not modify | const after = this function won't modify the object
    {
        m_DebugCount++;
        return m_name;
    }
};

int main()
{
    const Entity e;
    e.GetName();

    //above was first and mostly used way of using mutable....2nd is using while using lambda
    //it's quite complicated so I'll learn it while learning lambda and then update this part
    return 0;
}