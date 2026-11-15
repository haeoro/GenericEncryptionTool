#include <iostream>
#include <ctime>
#include <string>

int randnum()
{
    const int asciiToIntDistance = 48;

    std::srand(time(0));
	int x = std::rand();

    std::string wholeRNumS = std::to_string(x);
	int rVal = (static_cast<int>(wholeRNumS[(wholeRNumS.length())-1]) - asciiToIntDistance);
    if (rVal && rVal != 1) {
        return rVal;
    }
    else {
        return rVal+2;
    }
}
