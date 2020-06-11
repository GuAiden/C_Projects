
// This system reads input from a database and details things such as balance oweing, etc. 

#include <iostream>
#include <stdio.h>
#include "file.h"

int main()
{
	File first; 
	first.name = "First_Database";
	first.num_file = 0;


	std::cout << "This is the " << first.name << " of index " << first.num_file << "\n";
	first.say_hello();

	// Declaring name of new database
	first.create_file(first.name);
	return 0;
}

