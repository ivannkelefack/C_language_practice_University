/********* main.c ********
	
	Student Name 	= Ivan Ateazeh Nkelefack
	Student Number	= 101298605
*/

// Includes go here
#include <stdio.h>
#include "declarations.h"



int main(void)
{
	/* Test 1: valid date in Early Summer (May 16, 2026) */
	unsigned int date1 = 20260516;
	unsigned short int semester1 = get_semester(date1);
	print_semester(semester1);

	/* Test 2: invalid date (day 46 does not exist) */
	unsigned int date2 = 20240546;
	unsigned short int semester2 = get_semester(date2);
	print_semester(semester2);

	/* Test 3: valid date in Winter term (March 18, 2028) */
	unsigned int date3 = 20280318;
	unsigned short int semester3 = get_semester(date3);
	print_semester(semester3);

	return 0;
}