/********* main.c ********
	
	Student Name 	= Ivan Ateazeh Nkelefack
	Student Number	= 101298605
*/

// Includes go here
#include <stdio.h>
#include "declarations.h"



int main(void)
{
	unsigned int date1 = 20260516;
	unsigned short int semester1 = get_semester(date1);
	print_semester(semester1);

	unsigned int date2 = 20240546;
	unsigned short int semester2 = get_semester(date2);
	print_semester(semester2);

	unsigned int date3 = 20280318;
	unsigned short int semester3 = get_semester(date3);
	print_semester(semester3);

	return 0;

}