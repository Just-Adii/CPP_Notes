#include <iostream>
#include <string>
class char_theory//basically theory of char
{
    public:
    const char* name = "Cherno is great";//adding string using a pointer
    char name2[7]={'C','h','e','r','n','o',0};//adding string directly,here remember single inverted comma('')are used for characters
    //and 0 in the end is denoting null which is essential to write in strings,we could also have used '\0'
    //ie char name2[7]={'C','h','e','r','n','o','\0'}; 
    //std::cout<<(void*)name;//prints address of memory where "Cherno"is stored;
    //std::cout<<"&name"; prints address of memory where the pointer name is stored
    char name3;//(can't use char* name3 ie pointer since pointer will point in random direction) ie it's WILD POINTER
    void nameInput()
    {
        
        std::cin>>name3;//can add only a word since cin thinks of "space","tab" and "/n(newline)" as terminators 
        
    }
    void nameOut()
    {
        std::cout<<name<<"\n"<<name2<<"\n"<<"name3="<<name3<<std::endl;
    }
    /*int num;
     std::cin>>num;
     above two lines - this will show error - reason - executable code(cout,cin etc) inside a class is only allowed inside function
    */


};

int main()
{
    std::string name="cherno";//since "name" is in main as well as class you might be thinking why didn't it cause error - ans - different scope
    name += " hello!";
    //std::string name = std::string("cherno")+" hello!"; - instead of 33 and 34 we can write this but no use
    bool contains = name.find("no") != std::string::npos;
    char_theory chara;
    chara.nameInput();
    chara.nameOut();
    std::cout<<name<<"\n"<<contains;
    return 0;
}