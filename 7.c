#include<stdio.h>
int main()
{
    float time;
    int time1,time2,m;
    scanf("%f",&time);
    time1=time*100;
    time2=time1/100;
    m=time1%100;
    if(time2<=11.59)
        printf("%d:%d a.m.",time2,m);
    else
        printf("%d:%d p.m.",time2,m);
}
