#include<stdio.h>
int main()
{
    int n,i,j,a[100],k;
    scanf("%d",&n);
    i=0;
    while(n!=0)
    {
        a[i]=n%10;
        n=n/10;
        i++;
    }
    for(j=i-1;j>=0;j--)
    {
        if(a[j]==6)
        {
            a[j]=9;
            break;
        }
    }
    for(int k=i-1;k>=0;k--)
    {
        printf("%d",a[k]);
    }
    return 0;
}