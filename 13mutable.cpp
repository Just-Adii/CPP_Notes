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
    return 0;
}