#include<stdio.h>
int main()
{
    int arr[100],i,n,temp,fact=1;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        temp=arr[i];
        fact=1;
        while(temp)
        {
            fact=fact*temp--;
        }
        printf("%d
",fact);
    }
    return 0;
}