
#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include "file.h"

// This implementation file contains the i/o class, which has been named File. 

void print_AidenGu()
{
	printf("AidenGu\n");
}


// File class methods // 

void File::say_hello()
{
	printf("Hello!\n");
}

int File::create_file(const char *filename) 
{
	FILE *new_file;
	if ((new_file = fopen(filename, "w")) == NULL)
	{
		printf("Error has occured");
		return 0;
	} 
	else
	{
		fclose(new_file);
		printf("You made it");
		return 1;
	}
}

void File::print()
{

}

int File::read()
{
	return 0;
}