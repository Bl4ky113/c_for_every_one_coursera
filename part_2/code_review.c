#include<stdio.h>
#include<math.h>

int main(){
    double x;
    double result=0;
    printf("please enter the value of X between 0 and 1:\n");
    scanf("%lf",&x);

    result=sin(x);

    printf("the value pf %lf in sin will be:%lf",x,result);
    return 0;
}