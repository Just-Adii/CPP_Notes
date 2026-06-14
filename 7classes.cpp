#include <iostream>

class Player
{
    int x,y;
    int position;

    public:

    void position(int x1,int y1)
    {
        x=x1;
        y=y1;
    }
};

int main()
{
    int player;

    return 0;

}
/*Let say you're developer of Clash of Clans....we'll take that as an example for the whole notes
So there is barbarian,valkerie,giant etc
Let's call them different players
Now you would have noticed among them valkarie moves the fastest and giant the slowest while giant damages the most in single hit
Let say you want to make character like those
Making seperate variable to store those player's datas of hit damage and speed will be very much lengthy and prone to error 
So we make a Class to make it short for us and easier to handle multiple players

Object of a class we make in main is called instance of class. eg - Class_name obj_name; obj_name is the instance of class

A class is almost similar to sturct with main difference being the visibility of data inside them
Where struct have everything public by defualt class have contents private by default

*/
