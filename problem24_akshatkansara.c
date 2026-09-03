
#include<stdio.h>
void main()
{
    int x,y,temp;
    printf("enter x:");
    scanf("%d",&x);
    printf("enter y:");
    scanf("%d",&y);
    temp=x;
    x=y;
    y=temp;
    printf("the swapped values of x and y respectively are:%d%d",x,y);

}
