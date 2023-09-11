/*
 * =====================================================================================
 *
 *       Filename:  sine_calc.c
 *
 *    Description: Program that returns the value of sine between 0 and 1 (not inclusive) 
 *
 *        Version:  1.0
 *        Created:  09/11/2023 02:04:16 PM
 *       Compiler:  gcc
 *
 * =====================================================================================
 */

#include <stdio.h>
#include <math.h>

int main (void) {
    // delcare variables
    double result = 0.0, input = 0.0;

    // scan for the input
    scanf("%lf", &input);

    // use sin from math.h, passing the input as a paramter
    result = sin(input);

    // print the result
    printf("Result: %lf", result);

    return 0;
}
