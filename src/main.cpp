/*------------------------------------------------------------------------------
*   ``~CLI based encryption tool written by haeoro~``
*
*   getRandNumber() simply generates a random number when called.
------------------------------------------------------------------------------*/

#include <iostream>
#include <ctime>
#include <string>

int getRandNumber()
{
    const int asciiToIntDistance = 48;
    const int secondElementIndex = 3;

    std::srand(time(0));
	int x = std::rand();

    std::string wholeRNumS = std::to_string(x);
	std::cout << wholeRNumS;
	int rVal = static_cast<int>(wholeRNumS[secondElementIndex]);

    if (rVal) {
        return rVal - asciiToIntDistance;
    }
    else {
        return 0;
    }
}

int main()
{
    std::cout << "get rand number: "<< getRandNumber();
}

/*
~ seems like a valid method of getting a random number but this must be tested
  after work
*/

/*

notes!
~ main method of random num generation for the encryption program is all
 within the getRandNumber function.

~ if it returns 1 as rval i have to like find a way to make it try again or add some value
  to it.

~ for some reason, when i seed the rand function with time(0) on diff
architecture i get bigger numbers but this could be bad. might have to find another
way to do this if testing concludes that this will not work.

*/
