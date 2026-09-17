#include<stdio.h>
void main ()
{
    int i,n,p;
    printf("enter the n value till which you want the numbers to be printed=");
    scanf("%d",&p);
    n=0;
    for(i=1;i<=p;i++)
    {
        n=n+1;
        printf("%d\n",n);
    }
}


