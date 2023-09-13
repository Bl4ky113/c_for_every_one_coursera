/*
 * =====================================================================================
 *
 *       Filename:  sin_cos_table.c
 *
 *    Description: prints a table of values for sine and cosine between (0, 1). You will upload your program as a text file.  
 *
 *        Version:  1.0
 *        Created:  09/13/2023 03:54:04 PM
 *       Compiler:  gcc
 *
 * =====================================================================================
 */

#include <stdio.h> // For printf scanf
#include <math.h> // for sin cos
#include <stdlib.h> // for fabs

int main (void) {
  // Init variables
  double interval_value = 0;

  printf("Interval Value;\t sin(interval value);\t cos(interval value)\n");
  for ( int i = 0; i <= 10; i += 1 ) {
    // Calc the 10th of the iterator value
    interval_value = i / 10.0;
  
    // pass the interval value, then the sin and cos calculations
    printf(
        "%lf\t; %lf;\t %lf\n",
        interval_value,
        fabs(sin(interval_value)),
        fabs(cos(interval_value))
        );
  }
}
