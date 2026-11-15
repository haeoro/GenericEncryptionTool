/*------------------------------------------------------------------------------
*   ``~CLI based encryption tool written by haeoro~``
*
*   getRandNumber() simply generates a random number when called.
------------------------------------------------------------------------------*/

#include <iostream>
#include <ctime>
#include <string>
#include "random.h"

int main()
{
    std::cout << randnum();
}

/*

notes!
~ main method of random num generation for the encryption program is all
 within the getRandNumber function.

~ if it returns 1 as rval i have to like find a way to make it try again or add some value
  to it.

~

~ to-do

    do header documentation for random.h

*/
