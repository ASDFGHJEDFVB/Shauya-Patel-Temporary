#include<stdio.h>
void main()
{
    float n1,n2,n3,n4;
    printf("input number of periods:");
    scanf("%f",&n1);
    printf("input principal:");
    scanf("%f",&n2);
    printf("input rate:");
    scanf("%f",&n3);
    n4=n1*n2*n3;
    printf("output fahrenheit:%0.2f",n4);


}



