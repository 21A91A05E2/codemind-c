#include<stdio.h>
int main()
{
    int N,sum=0,temp,rem;
    scanf("%d",&N);
    temp=N;
    while(N>0)
    {
        rem=N%10;
        sum=(sum*10)+rem;
        N=N/10;
    }
    if(temp==sum)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
    return 0;
}