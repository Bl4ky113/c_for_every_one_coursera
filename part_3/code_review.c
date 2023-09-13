#include<stdio.h>
#include<math.h> /* has  sin(), abs(), and fabs() */
int main(void)
{ 
double interval;
double i;
printf("How many values of sine and cosine do you need? : ");
scanf("%lf",&i);
printf("argument \t sin(argument) \t cos(argument)\n");
for(int j = 0; j <i; j++)
{
 interval = j/i;
 printf("%lf \t %lf \t %lf\n", interval, sin(interval), cos(interval)); /*Changed abs(sin(interval)) ---> fabs()*/
};


printf("\n+++++++\n");
return 0;
}