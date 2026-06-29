/*
The Ternary Operator :
condition ? expression_if_true : expression_if_false;

Do two things
1. Makes the code look cleaner
2. Optimises a little in some cases

*/

#include <iostream>
#include <string>
static int s_Level=1;
static int s_Speed=2;
int main()
{
   /* if(s_Level>5)
    {
        s_Speed=10;
    }
    else
        s_Speed=5;
        
        for above code we can write much simpler code below using ternary operator
        */
    s_Speed = s_Level > 5 ? 10 : 5; // States s_Speed = 10 if s_Level>5 is true otherwise s_Level = 5;

    //eg. 2 below...for giving a player a rank
    std::string rank = s_Level> 10 ? "Master" : "Beginner"; //initialised the moment rank got declared
    /*
    The longer way
    std::string otherRank; // 1. Creation / Default Construction
    if (s_Level > 10)
        otherRank = "Master"; // 2. Assignment
    else
        otherRank = "Beginner"; // 2. Assignment
    */
    return 0;
}

/*
================================================================================
| FEATURE        | TERNARY OPERATOR (rank)     | SEPARATE IF-ELSE (otherRank)  |
================================================================================
| Steps          | 1 step (Direct Init)        | 2 steps (Empty -> Overwrite)  |
| Performance    | Faster (No wasted steps)    | Slower (Default construct)    |
| Supports const?| YES (Highly recommended)    | NO (Value must change later)  |
================================================================================

Note - nesting ternary operator is confusing,so don't use it in those cases

*/