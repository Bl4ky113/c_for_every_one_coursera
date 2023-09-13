/*
 * =====================================================================================
 *
 *       Filename:  fix_code.c
 *
 *    Description: Fix some code 
 *
 *        Version:  1.0
 *        Created:  09/13/2023 03:20:48 PM
 *       Compiler:  gcc
 *
 * =====================================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h> /* has  sin(), abs(), and fabs() */

int main(void)
{ 
  double interval;
  int i;

  for(i = 0; i <30; i++)
  {
    interval = i/10.0;
    printf("sin( %lf ) = %lf \t", interval, fabs(sin(interval)));
  }

  printf("\n+++++++\n");
  return 0;
}
