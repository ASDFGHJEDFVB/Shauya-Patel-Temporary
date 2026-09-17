#include<stdio.h>
void main()
{
    float n,g,d;
    printf("enter the g value:");
    scanf("%f",&g);
    if(g>20000)
    {
        d=g*0.15;
        n=g-d;
        printf("the net salary is:%f",n);
    }
    else if(g>10000 && g<20000)
    {
        d=g*0.10;
        n=g-d;
        printf("the net salary is:%f",n);

    }
    else{
        d=g*0.05;
        n=g-d;
        printf("the net salary is:%f",n);
    }








}


