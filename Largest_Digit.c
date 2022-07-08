#include<stdio.h>
int main()
{
    int lar=0,n,remain;
    scanf("%d",&n);
    while(n!=0)
    {
        remain=n%10;
        if(lar<remain)
        {
            lar=remain;
        }
        n=n/10;
    }
    printf("%d",lar);
    return 0;
}