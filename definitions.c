/********* definitions.c ********
	
	Student Name 	= Ivan Ateazeh Nkelefack
	Student Number	= 101298605
*/

// Your solution goes here
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include "declarations.h"

/* Extracts the year from the date (YYYYMMDD format) by dividing by 10000.
   Returns the year if >= 1000, otherwise returns 0 (invalid). */
unsigned short int get_year(unsigned int date) {
    unsigned short int year = date / 10000;
    if (year >= 1000) {
        return year;
    } else {
        return 0;
    }
}

/* Extracts the month from the date using (date / 100) % 100.
   Returns the month if between 1 and 12, otherwise returns 0 (invalid). */
unsigned short int get_month(unsigned int date) {
    unsigned short int month = (date / 100) % 100;
    if (month >= 1 && month <= 12) {
        return month;
    } else {
        return 0;
    }
}

/* Checks if the given year is a leap year.
   A year is a leap year if:
   - divisible by 4, AND
   - not divisible by 100, UNLESS also divisible by 400.
   Returns 1 (true) if leap year, 0 (false) otherwise. */
_Bool leap_year(unsigned short int year) {
    if (year % 4 == 0) {
        if (year % 100 == 0) {
            if (year % 400 == 0) {
                return 1; /* divisible by 400: leap year */
            } else {
                return 0; /* divisible by 100 but not 400: not a leap year */
            }
        } else {
            return 1; /* divisible by 4 but not 100: leap year */
        }
    } else {
        return 0; /* not divisible by 4: not a leap year */
    }
}

/* Extracts the day from the date using date % 100.
   Validates the day based on the month and whether the year is a leap year.
   Returns the day if valid, otherwise returns 0 (invalid). */
unsigned short int get_day(unsigned int date) {
    unsigned short int day   = date % 100;
    unsigned short int month = get_month(date);

    switch (month) {
        /* Months with 31 days */
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            if (day >= 1 && day <= 31) {
                return day;
            } else {
                return 0;
            }
            break;

        /* February: 29 days in a leap year, 28 otherwise */
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

        /* Months with 30 days */
        case 4: case 6: case 9: case 11:
            if (day >= 1 && day <= 30) {
                return day;
            } else {
                return 0;
            }
            break;

        default:
            return 0;
    }
}

/* Determines which semester the date falls under.
   Calls get_year(), get_month(), and get_day() to validate the date.
   If any part is invalid, returns 0.
   Otherwise prints the date and returns:
     1 = Fall (September - December)
     2 = Winter (January - April)
     3 = Early Summer (May - June)
     4 = Late Summer (July - August) */
unsigned short int get_semester(unsigned int date) {
    unsigned short int year  = get_year(date);
    unsigned short int month = get_month(date);
    unsigned short int day   = get_day(date);

    /* If any component is invalid, the full date is invalid */
    if (year == 0 || month == 0 || day == 0) {
        return 0;
    }

    /* Print the extracted date only if valid */
    printf("You entered: %d/%d/%d\n", year, month, day);

    if (month >= 1 && month <= 4) {
        return 2; /* Winter */
    } else if (month >= 5 && month <= 6) {
        return 3; /* Early Summer */
    } else if (month >= 7 && month <= 8) {
        return 4; /* Late Summer */
    } else {
        return 1; /* Fall */
    }
}

/* Prints which semester corresponds to the given semester number.
   Uses switch/case as required.
   0 = invalid date, 1 = Fall, 2 = Winter, 3 = Early Summer, 4 = Late Summer */
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