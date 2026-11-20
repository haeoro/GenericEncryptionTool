/*------------------------------------------------------------------------------
*   ``~CLI based encryption tool written by haeoro~``
*
*   getRandNumber() simply generates a random number when called.
------------------------------------------------------------------------------*/

#include <iostream>
#include <ctime>
#include <string>
#include "random.h"
#include <windows.h>
#include <vector>

int main(int argc, char *argv[])
{
    std::vector<int> test;
    int sIndex = 0;
    int argLength = strlen(argv[1]);
    while ( sIndex != argLength )
    {
        Sleep(1000);
        int randNum = randnum();
        test.append(randNum);
        std::cout << sIndex << " cipher " << ((char)(argv[1][sIndex] + randNum)) << '\n';
        sIndex++;
    }
}

/*

notes!
~ main method of random num generation for the encryption program is all
 within the getRandNumber function.

~ if it returns 1 as rval i have to like find a way to make it try again or add some value
  to it.

~

~ to-do

    ~ do header documentation for random.h
    ~ make it generate a key.

*/
