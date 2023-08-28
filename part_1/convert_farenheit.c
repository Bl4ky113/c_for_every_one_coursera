/*
 * =====================================================================================
 *
 *       Filename:  convert_farenheit.c
 *
 *    Description: Convert an Farenheit input to Celcius
 *
 *        Version:  1.0
 *        Created:  08/28/2023 05:02:38 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Bl4ky
 *
 * =====================================================================================
 */

#include <stdio.h>

int main (void) {
  
  int farenheit, celcius;
  
  printf("Enter a Farenheit temperature: ");
  scanf("%d", &farenheit);

  celcius = (farenheit - 32) / 1.8;
  printf("Farenheit: %d -> Celcius: %d", farenheit, celcius);

  return 0;
}

