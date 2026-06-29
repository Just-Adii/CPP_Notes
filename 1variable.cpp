/*
nothing before a variable      - DATA VARIBLE(data stored in Stack)
Asterisk Before a Variable     - ADDRESS VARIABLE(Data Stored in Stack and Heap)
AMPERSAND(&) Before a Variable - REFERENCE VARIABLE(must be initialised at time of declaration)
*/
#include <iostream>

int main()
{
	/*Data Types-allocate memory and decides how to handle data*/
	int a = 4;//int-4 bytes ie 32 bits - 1 bit contains 2 options 0 or 1 total ways data can be stored is 2^31 ie from -2B to 2B
	unsigned int b = 25;//above I have written total ways is 2 ^ 31 but total bits is 32 then why 31...since 1 bit(left most) is occupied 
//for +/- sign (0 - plus,1 - minus)..using unsigned tell compiler that we'll only use positive no. freeing it up so now we can use 2^32 patterns ie 4B ways to store data

	//char - holds 1 byte(8 bits) and displays character
	//short- holds 2 byte(16 bits)
	//long- holds 4 byte(platform dependent-on linux - 8 byte)
	// long long - holds 8 byte
	//float - holds 4 byte - it stores no. in scientific form - 1 bit for sign 8 bit for exponent and 23 bit for mantissa(fraction)

	//checking memory allocation of data types

	std::cout << "Memory occupied by int in bytes:"<<sizeof(int) << std::endl;
    std::cout << "Memory occupied by char in bytes:"<<sizeof(char) << std::endl;
    std::cout << "Memory occupied by short in bytes:"<<sizeof(short) << std::endl;
    std::cout << "Memory occupied by long in bytes:"<<sizeof(long) << std::endl;
    std::cout << "Memory occupied by long long in bytes:"<<sizeof(long long) << std::endl;
    std::cout << "Memory occupied by bool in bytes:"<<sizeof(bool) << std::endl;
    //Wait! bool is just a true false data type..for false - 0 and for true - 1....it should only get assigned 1 bit,then why 1 byte ie 8 bits is 
    //being assigned...the answer is...RAM is byte addressable not bit,ie in memory space bit can't be located,that's why we give it byte, 
    // compromising the extra space; if we want to be smart with memory management we can dtore 8 bools in 1 byte
    //TLDR-For bool 1 bit needed-1 byte allocated - hardware forces it.
    return 0;
}