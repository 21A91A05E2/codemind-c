#include<stdio.h>
int main()
{
    int n,remainder,sum=0,sqr;
    scanf("%d",&n);
    sqr=n*n;
    while(sqr!=0)
    {
        remainder=sqr%10;
        sum=sum+remainder;
        sqr=sqr/10;
    }
    if(sum==n)
    {
        printf("Neon Number");
    }
    else
    {
        printf("Not Neon Number");
    }
    return 0;
}