#include<stdio.h>
int main()
{
    int max=0,i,n,sum=0;
    scanf("%d",&n);
    int num[n];
    for(i=0; i<n; i++)
     {
        scanf("%d",&num[i]);
        if(max<num[i])
        {
            max=num[i];
            sum=i+1;
        }

    }
    printf("%d %d",sum,max);

    return 0;

}
