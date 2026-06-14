#include <iostream>
#include <string>
int main()
{
    int n;
    std::cin>>n;
    //std::cin.ignore();
    
    std::string name;
    
    std::getline(std::cin,name);
    std::cout<<n<<" "<<name;

    return 0;
}
/*
In the current code you're able to push in the int value but as you hit enter you won't be able to write the 
string name,and it'll be skipped...why does it happen
Ans-
Enter (\n) is data: To a computer, pressing Enter is not just an action. It creates a literal, invisible character called a newline (\n).

    The Waiting Room (Buffer): When you type an input and hit Enter, both your input and that \n 
    character are sent to a temporary memory storage line called the input buffer.

    How std::cin >> works: It only grabs the data it needs (like a number) and stops right before 
    the \n. It leaves that \n sitting at the very front of the memory line.

    How std::getline works: Its only job is to read text until it hits a \n. Because std::cin 
    left a \n at the front of the line, std::getline sees it instantly, thinks you already hit Enter, and skips your input.

    The Fix (std::cin.ignore()): This command deletes that leftover \n from the memory line. 
    This clears the path so std::getline can actually wait for your new typing.
*/