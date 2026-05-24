/********* definitions.c ********
	
	Student Name 	= Ivan Ateazeh Nkelefack
	Student Number	= 101298605
*/

// Your solution goes here
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include "declarations.h"

unsigned short int get_year(unsigned int date) {
	unsigned short int year = date /10000;
	if (year >= 1000) {
		return year;
	}
	else {
		return 0;
	}

}

unsigned short int get_month(unsigned int date) {
	unsigned short int month = (date / 100) % 100;
	if (month >= 1 && month <= 12) {
		return month;
	}
	else {
		return 0;
	}
}

_Bool leap_year(unsigned short int year ) {
	if (year % 4 == 0) {
		if (year % 100 == 0) {
			if (year % 400 == 0) {
				return 1;
			} else {
				return 0;
			}
		} else {
			return 1;
		}
	} else {
		return 0;
	}

}

unsigned short int get_day(unsigned int date) {
	unsigned short int day = date % 100;
	unsigned short int month = get_month(date);
	switch (month) {
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
			if (day >= 1 && day <= 31) {
				return day;
			} else {
				return 0;
			}
			break;

		case 2:
			if (leap_year(get_year(date))) {
				if (day >= 1 && day <= 29) {
					return day;
				} else {
					return 0;
				}
			} else {
				if (day >= 1 && day <= 28) {
					return day;
				} else {
					return 0;
				}
			}
			break;

		case 4:
		case 6:
		case 9:
		case 11:
			if (day >= 1 && day <= 30) {
				return day;
			} else {
				return 0;
			}
			break;

	}
}

unsigned short int get_semester(unsigned int date) {
	unsigned short int year = get_year(date);
	unsigned short int month = get_month(date);
	unsigned short int day = get_day(date);

	if ( year == 0 || month == 0 || day == 0) {
		return 0;
	}

	printf("You entered: %d/%d/%d\n", year, month, day);

	if (month >= 1 && month <= 4) {
		return 2; // Winter
	} else if (month >= 5 && month <= 6) {
		return 3; // Early Summer
	} else if (month >= 7 && month <= 8) {
		return 4; // Late Summer
	} else {
		return 1; // Fall
	}
}

void print_semester(unsigned short int semester) {
	switch (semester) {
		case 0:
			printf("This date is an invalid date\n");
			break;

		case 1:
			printf("This date falls in Fall term\n");
			break;

		case 2:
			printf("This date falls in Winter term\n");
			break;

		case 3:
			printf("This date falls in Early summer term\n");
			break;

		case 4:
			printf("This date falls in Late summer term\n");
			break;
	}
}
