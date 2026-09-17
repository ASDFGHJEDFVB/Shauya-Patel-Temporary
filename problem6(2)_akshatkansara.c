#include<stdio.h>
void main()
{
    float n1,n2,n3,total,avg;
    printf("enter the n1 value:");
    scanf("%f",&n1);
    printf("enter the n2 value:");
    scanf("%f",&n2);
    printf("enter the n3 value:");
    scanf("%f",&n3);
    total=n1+n2+n3;
    avg=total/3;
    if(n1<35 || n2<35 || n3<35)
    {
        printf("the total marks are:%f\n",total);
        printf("the avg marks are:%f\n",avg);
        printf("FAIL");
    }
    else if(avg>=35 && avg<50)
    {
        printf("the total marks are:%f\n",total);
        printf("the avg marks are:%f\n",avg);
        printf("THIRD CLASS");

    }
    else if(avg>=50 && avg<60)
    {
        printf("the total marks are:%f\n",total);
        printf("the avg marks are:%f\n",avg);
        printf("SECOND CLASS");
    }
    else if(avg>=60 && avg<70)
    {
        printf("the total marks are:%f\n",total);
        printf("the avg marks are:%f\n",avg);
        printf("FIRST CLASS");
    }
    else{
        printf("the total marks are:%f\n",total);
        printf("the avg marks are:%f\n",avg);
        printf("DISTINCTION");
    }








}



