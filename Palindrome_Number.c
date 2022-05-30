#include<stdio.h>
int main()
{
    int i,n,r,temp,t,d;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d",&n);
        r=0;
        temp=n;
        while(n>0)
        {
            d=n%10;
            r=r*10+d;
            n=n/10;
        }
        if(temp!=r)
        {
            printf("False
");
        }
        else
        {
            printf("True
");
        }
    }
    return 0;
}