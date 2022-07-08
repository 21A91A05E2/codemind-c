#include<stdio.h>
int main()
{
    int n,f=1,i;
    scanf("%d",&n);
    for(i=1;i<n;i++)
    {
        if(n%i==0)
        {
            f=f+i;
            
        }
    }
    if(f>n)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
    return 0;
}