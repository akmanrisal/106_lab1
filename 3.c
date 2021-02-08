#include<stdio.h>
int main()
{
    unsigned long int n,n1,n2;
    scanf("%lu", &n);
    n1=n%3;
    n2=n%11;
    printf("%lu %lu",n1 ,n2 );
    return 0;
}
