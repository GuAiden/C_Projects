#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <iostream>
#include <string>


class File {
	public:
		// Attributes
		int num_file;
		const char *name;
		
		// Methods
		void say_hello();
		int create_file(const char *filename);
		void print();
		int read();
};




