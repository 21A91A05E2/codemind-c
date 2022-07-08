#include<stdio.h>
int main()
{
    int i,f1,f2,f3,n;
    scanf("%d",&n);
    f1=0;
    f2=1;
    printf("%d %d",f1,f2);
    i=3;
    do
    {
        f3=f1+f2;
        printf(" %d",f3);
        f1=f2;
        f2=f3;
        i++;
    }while(i<=n);
}