#include <iostream>
#include <string>
using namespace std;
class Students
{
int roll;
string name;

public:

void input()
{
    cin>>roll;
    getline(cin,name);
}

void output()
{
    cout<<roll<<"\n"<<name;
}

};

int main()
{
    Students s;
    s.input();
    s.output();
    return 0;
}
//You can see a red dot at line 27 - that's a breakpoint...it stops the program 1ms before it reaches that specific line
//ie - program is stopped 1ms before reaching 27th line for now...ie...the variables are made till now but data isn't taken into the variables
//yet.On line 26, Students s; executes. The computer creates the object s in memory, allocates space for roll and name, 
//and fills them with junk data (or empty states).
/*1. Step Into (F11)

    The Layman Definition: "Go inside the room."

    What it does: If the current line is a function call, this button jumps your view inside that function's 
    definition so you can watch it execute line-by-line.

    When to use it: Use this when you suspect a bug is hiding inside a specific function and you want to look at its inner math/logic.

    The Analogy: The tour guide reaches a bedroom door. You press "Step Into," and the camera follows them inside
     the bedroom to see what's on the shelves.

2. Step Over (F10)

    The Layman Definition: "Skip the drama, just give me the result."

    What it does: This executes the current line completely. If that line happens to be a function, the computer 
    runs the entire function in the background at lightning speed, but keeps your screen right where it is and moves to the next line.

    When to use it: Use this when you are 100% sure a function works perfectly, and you don't want to waste time 
    watching its individual lines execute.

    The Analogy: The tour guide reaches the bathroom. You know what a bathroom looks like and don't care to see it. 
    You press "Step Over"—the guide goes inside, cleans the bathroom in fast-forward, and you only open your eyes 
    when they walk out into the hallway again.

3. Step Out (Shift + F11)

    The Layman Definition: "Get me out of here!"

    What it does: If you are currently trapped line-by-line inside a function and realize it's getting boring or irrelevant, 
    this button tells the computer to run the rest of that function instantly and jump your view back out to the main line that called it.

    When to use it: Use this when you accidentally clicked "Step Into" on a function that you didn't mean to investigate, 
    and you want to quickly escape back to main().

    The Analogy: You are inside a massive walk-in closet looking at socks line-by-line. You get bored. You press "Step Out,"
     and the camera instantly warps back outside to the main hallway where you started.
     
     Summary Note:

        Step Into: Dives inside a function to watch every detail.

        Step Over: Runs the function in the background without showing you the details.

        Step Out: Finishes the current function instantly and jumps back out to the parent code.
     */