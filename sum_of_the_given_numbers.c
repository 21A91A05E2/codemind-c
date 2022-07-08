#include<stdio.h>
int main()
{
    int i,n,s,a[100],b[100];
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {
        scanf("%d%d",&a[i],&b[i]);
    }
    for(i=0;i<n;i++)
    {
        s=a[i]+b[i];
        printf("%d
",s);
    }
    return 0;
}