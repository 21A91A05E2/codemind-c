#include<stdio.h>
#include<math.h>
int main()
{
    int n,a;
    float b;
    scanf("%d",&n);
    b=sqrt((double)n);
    a=b;
    if(a==b)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
    return 0;
}