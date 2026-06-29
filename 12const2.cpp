
//Whenever you create a function which is read only...make it const
#include <iostream>

class Entity
{
private:
int m_X,m_Y;//a convention as I discuessed which helps us differentiate b/w member variable and local variable
mutable int var;
public:
    int getX() const//(getter) using cost with this method do that it don't allow to modify member variables
                    //When you mark a member function (method) as const, you are making a binding promise to the compiler: 
                    //"This method is read-only. It will not modify any of the data members of the object it belongs to."
    {
        var=2; // var is mutable ie can be modified even inside constat mehods!,,mutable is Used when we want to keep method const but need to be 
            //able to change some variable still
        return m_X;
    }//we can also think by using const we promised that this function is read only and it won't modify anything

    int setX(int x) //(setter) - there's a convention getter reads and setter sets ie write so we use get and set
    {
        m_X=x;
    }

};
void printEntity(const Entity& e)//I won't wanna copy a class since it can be big and so it's better to use reference
{
    //you can't modify e here ie if e.getX() is to be called inside getX must be const otherwise error will come
    std::cout<<e.getX()<<std::endl;
}
int main()
{
    const int MAX_AGE=90;
    const int* const a=new int;//preventing content change from memory address and preventing pointer "a" to point at something else
    return 0;
}