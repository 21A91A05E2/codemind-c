#include<stdio.h>
#include<math.h>
int main()
{
    int n,r;
    scanf("%d",&n);
    int temp=n,c=0;
    while(temp!=0)
    {
        temp=temp/10;
        c++;
    }
    temp=n;
    int s=0;
    while(temp!=0)
    {
        r=temp%10;
        s=s+pow(r,c);
        temp=temp/10;
        c--;
    }
    if(s==n)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
    return 0;
}