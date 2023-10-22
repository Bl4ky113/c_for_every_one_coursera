#include <stdio.h>
int main(void)
{
    int n,total=0,i;
    double avg,weight[10];
    printf("Enter number of elephant seals\n");
    for(i=0;i<n;i++)
    {
        scanf("%lf",&weight[i]);
        total=total+weight[i];
    }
    avg=total/n;
    printf("average weight is %lf",avg);
    return 0;
}
