#include<stdio.h>
void main()
{
    int i,n,sum=0;
    printf("enter the n value:\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        sum=sum+i;
        i=i+2;
    }
    printf("the sum of n natural numbers is=%d",sum);

}

