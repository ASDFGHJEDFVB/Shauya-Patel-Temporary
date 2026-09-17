#include<stdio.h>
void main()
{
    int n1,n2,n3;
    printf("enter the first value:");
    scanf("%d",&n1);
    printf("enter the second value:");
    scanf("%d",&n2);
    printf("enter the third value:");
    scanf("%d",&n3);
    if(n1>n2 && n1>n3)
    {
        printf("n1 is greater than n2 and n3");
    }
    else if(n2>n1 && n2>n3)
    {
                printf("n2 is greater than n1 and n3");

    }
    else{
                printf("n3 is greater than n1 and n2");
    }








}
