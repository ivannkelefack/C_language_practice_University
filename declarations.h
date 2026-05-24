#ifndef DECLARATIONS_H
#define DECLARATIONS_H

/********* declarations.h ********
	
	Student Name 	= Ivan Ateazeh Nkelefack
	Student Number	= 101298605
*/

#include <stdbool.h>
#include <stdio.h>

/********** DON'T MODIFY **********/
/*
  find which semester the date falls under
*/
unsigned short int get_semester(unsigned int);
/*
  Extract and validate the year from entered date
*/
unsigned short int get_year(unsigned int);
/*
  check if the year is a leap year or not
*/
_Bool leap_year(unsigned short int);
/*
  Extract and validate the month from entered date
*/
unsigned short int get_month(unsigned int);
/*
  Extract and validate the day from entered date
*/
unsigned short int get_day(unsigned int);
/*
  print out which semester does the date fall in
*/
void print_semester(unsigned short int);
/********** DON'T MODIFY **********/

// Extra functions' Prototypes/Declarations go here



#endif