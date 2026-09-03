#include<stdio.h>
#include<math.h>
void main()
{
    float n1,n2,n3,n4;
    printf("input bytes:");
    scanf("%f",&n1);
    n2=(n1/1000);
    n3=(n2/1000);
    n4=(n3/1000);
    printf("\noutput kilobytes:%0.2e", n2);
    printf("\noutput megabytes:%0.2e", n3);
    printf("\noutput gigabytes:%0.2e", n4);


}
