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

int usage()
{
    std::cout << "toolname -e MESSAGE\n";
    return 1;
}

int main(int argc, char *argv[])
{
    std::vector<int> key = {};

    if (argc < 2)
    {
        usage();
        return 1;
    }
    int sIndex = 0;
    int argLength = strlen(argv[2]);
    while ( sIndex != argLength )
    {
        // while this is going do encrypting... then display decryption key
        Sleep(1000);
        int randNum = randnum();
        auto pos = key.begin();
        pos = key.insert(pos, randNum);
        std::cout << sIndex << " cipher " << ((char)(argv[2][sIndex] + randNum)) << '\n';
        sIndex++;
        pos++;
    }
    std::cout << key[0];
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
    ~ append each cipher randnum to a character array
    then display the full cipher key containing all randnum gens
    to the screen after everything has been encrypted along with the ciphertext

*/
