#include<stdio.h>
int main()
{
    int i,a,b,gcd,lcm;
    scanf("%d%d",&a,&b);
    for(i=1;i<=a&&b;i++)
    {
        if(a%i==0 && b%i==0)
        {
            gcd=i;
        }
    }
    lcm=(a*b)/gcd;
    printf("%d",lcm);
    return 0;
}