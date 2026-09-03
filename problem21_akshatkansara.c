#include<stdio.h>
void main()
{
    float n1,n2,n3,n4;
    printf("input your gross salary:");
    scanf("%f",&n1);
    n2=n1*0.1;
    n3=n1*0.03;
    n4=n1+n2-n3;
    printf("output net salary:%0.2f",n4);

}


