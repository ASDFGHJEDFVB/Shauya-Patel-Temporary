#include<stdio.h>
void main()
{
    float n1,n2,n3,n4;
    printf("input celsius:");
    scanf("%f",&n1);
    n2=(n1*9);
    n3=(n2/5);
    n4=(n3+32);
    printf("output fahrenheit:%0.2f",n4);
}


