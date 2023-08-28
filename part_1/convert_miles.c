/*
 * =====================================================================================
 *
 *       Filename:  convert_miles.c
 *
 *    Description: Convert miles to yards 
 *
 *        Version:  1.0
 *        Created:  08/28/2023 05:12:08 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 * =====================================================================================
 */

#include <stdio.h>

int main (void) {
  int miles = 26, yards = 385;
  double kilometers;

  kilometers = 1.609 * ( miles + yards / 1760.0 );
  printf("From miles: %d and %d yards; to %lf Kilometers", miles, yards, kilometers);
}
