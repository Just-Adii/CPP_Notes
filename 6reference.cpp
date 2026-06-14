/*
1.Reference is an Alias(nickname) of variable that has no memory of it's own.
-----------------------------------------------------------------------------------------------------------------------------------------------
Best analogy to understand pass by referece and pass by value
----------------------------------------------------PASS BY REFERECNCE--------------------------------------------------------------------
Suppose there lives two kids in house one brother and one sister
And there's one toy only in the house which looks like a bird...brother the chaotic one named it dragon,
sister the elegant one named it butterfly,TOY IS ALWAYS KEPT ON SHELF
Now if brother makes paints or breaks the dragon sister sees butterfly painted or broken..
since it's the same thing with two different names,while if sister repairs the toy,dragon gets repaired as well

--THAT ABOVE IS WHAT PASS BY REFERENCE IS...TOY IS KEPT ON SHELF(VALUE STORED IN MEMORY),BROTHER AND SISTER'S MIND IS PARAMETER
WHAT THEY THINK THEY CAN DO WITH TOY,BROTHER AND SISTER THEMSELVES ARE FUNCTIONS MAKING CHANGE TO THE TOY....DRAGON AND BUTTERFLY IS
JUST A NAME GIVEN TO THE TOY (AN ALIAS)
---------------------------------------------------------------------------------------------------------------------------------------------

------------------------------------------------------------EXAMPLE CODE---------------------------------------------------

#include <iostream>

int brother(int& dragon)// int& is the thought of borhter recalling his dragon is kept on the shelf
{
dragon=200;//from shelf he picks the toy and set the toy value to 200(by defualt it was 5)
return dragon;
}

int sister(int& butterfly)//int& is the thought of sister recalling her butterfly is kept on the shelf
{
    butterfly=butterfly-50;//from shelf she takes the butterfly and reduces 50 from it
    return butterfly;
}

int main()
{
    int toy=5; originally it's just called toy and it's value is 5
    brother(toy); //brother made the toy's value 200
    sister(toy);//the value sister recieved ie 200,she reduced 50 from it
    std::cout<<toy; //when in the end it's checked,value of toy checked is 150
    return 0;
}
---------------------------------------------------------------------------------------------------------------------------


-------------------------------------------------PASS BY VALUE-------------------------------------------------------------
NOW THE SISTER IS FED UP BY HOW ROUGH THE BROTHER PLAYS WITH THE BIRD TOY...SO SISTER DEMANDED THE PARENT THAT SHE WON'T PLAY WITH THE SAME
TOY SHE WANTS AN IDENTICAL TOY TO PLAY WITH,BROTHER SAYS IF SISTER IS GETTING NEW THAN I ALSO WANT ANOTHER IDENTICAL BIRD..THE NEW ONE
..HER PARENTS BROGHT TWO EXACT COPY OF THE TOY...(TWO FUNCTIONS THEY MADE COPY OF ORIGINAL FOR THEMSELVES)

NOW THE TOYS CAN'T BE KEPT ON THE SAME PLACE IN SHELF..SO FOR CONVIENECE LET'S SAY THEY ARE KEPT BESIDE EACH OTHER BUT BOTH CAN BE KEPT AT
ANY FREE SPACE IN THE SHELF....NOW WHEN SISTER WANTS BUTTERFLY SHE GOES TO HER TOY,MAKE CHANGES TO IT AND KEEPS IT THERE
AND THE FIRST BIRD,IS KEPT IN HER ADDRESS AS IT IS,NO CHANGE WILL BE DONE TO HER SINCE BROTHER HAVE DRAGON NOW,SISTER HAVE BUTTERFLY NOW
BOTH SAME LOOKING AS THE BIRD TOY,BUT NO ONE TOUCHING THE FIRST BIRD TOY

WHEN BROTHER WANTS DRAGON HE GOES TO HIS TOY,MAKES CHANGES TO IT AND KEEPS ON THE IT'S PLACE,NO CHANGES DONE TO THE BUTTERFLY

THIS IS ALL THERE IS TO PASS BY VALUE
A COPY OF ORIGINAL IS MADE BY THE FUNCTION,AND ALL CHANGES ARE DONE TO THAT COPY AND A DIFFERENT ADDRESS IS PROVIDED TO THE COPY AND THE VALUE 
IS STORED IN THAT ADDRESS....

--------------------------------------------------EXAMPLE CODE-------------------------------------------------------------------------
#include <iostream>

int brother(int dragon)
{
dragon=200;
std::cout<<dragon<<std::endl;
return 0;
}

int sister(int butterfly)
{
    butterfly=butterfly+50;
    std::cout<<butterfly<<std::endl;
    return 0;
}

int main()
{
    int toy=5;//ORIGINAL TOY KEPT UNTOUCHED
    brother(toy);//COPY OF TOY MADE BY BROTHER NAMED DRAGON AND THEN VALUE CHANGED TO 200
    sister(toy);//COPY OF TOY MADE BY SISTER NAMED BUTTERFLY AND THEN VALUE CHANGED TO PLUS 50 WHATEVER VALUE OF ORIGINAL TOY WAS
    std::cout<<toy;
    return 0;
}
    
------------------------------------------------------IMPORTANT CONCEPT------------------------------------------------------------------------
WHY JUST PASSING NAME DOESN'T CHANGE THE MEMORY OF THE VARIABLE AND INSTEAD MAKES A NEW COPY?
ANS - WHEN WE JUST PASS "INT NAME" IN PARAMETER OF FUNCTION WE DON'T TELL IT TO GO TO ADDRESS WE ARE SAYING IT TO MAKE A VARIABLE AND STORE WHATEVER IT'S RETURNING
WHEN WE WRITE "INT& NAME" WE ARE SATING TO GO TO MEMORY ADDRESS OF THE VARIABLE AND MAKE CHANGES THERE - THAT'S IT
-----------------------------------------------------------------------------------------------------------------------------------------------
*/
/*#include <iostream>

void log(int a)
{
    a++;
    std::cout<<a<<std::endl;
}

int main()
{
    int a=5;
    log(a);
    
    return 0;

}*//*The above code have a bug

Think you're playing clash of clans - whenever you get more coins /elxir in that game cuz of above code the original coins won't be displayed as
increased but a new coin storage is made and shown in screen until the screen until the code function runs afterwards vanishes
And you always get stuck with same amout of money
That's why pass by value is not great and that's the reason we use pass by reference
The above code...don't even see it as pass by value though it is pass by value but still confusing...don't go on same variable name
they both are completely different 
*/ 
#include <iostream>

void increment(int& value)//& tells you that don't make a new box(new memory space),just make "value" a nickname for what gets passed into
{                         //while log(int a) stated that make a brand new int, copy the value into it, call it "a".
    value++;
}

int main()
{
    int a = 5;
    

    increment(a);
    std::cout<<a<<std::endl;
    return 0;
}

/*
so....nickname is a reference given to someone..like if I'm calling my friend bhai
I am refering to a boy named ayush whom I saay bhai

*/
