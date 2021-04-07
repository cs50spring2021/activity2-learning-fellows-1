/* 
 * str2int.h - a utility function to convert string to integer.
 *
 * David Kotz, April 2021
 */

#ifndef __STR2INT_H__
#define __STR2INT_H__

#include <stdbool.h>


/* ***************** str2int ********************** */
/*
 * Convert a string to an integer, returning that integer.
 * Returns true if successful, or false if any error. 
 * It is an error if there is any additional character beyond the integer.
 * Assumes number is a valid pointer.
 */
bool str2int(const char string[], int * number);

#endif // __STR2INT_H__
