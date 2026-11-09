/*-----------------------------------------------------------------------------
*	``~Program written by haeoro~``
*
*	Encryption program used to cipher text.

-----------------------------------------------------------------------------*/

#include <iostream>
#include <ctime>

int main()
{
	std::srand(time(0));
	int x = std::rand();
	int *y = &x;

	std::cout << *y;
}

// notes

/*
	~ figure out how to rand generate a range from 1-9
	~ then go from there.

*/
