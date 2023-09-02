//Print area of circle. (pie*r*r)

#include<stdio.h>
//#define pi 3.14
void main()

{   float r;
    const float pi=3.14;
    printf("Enter value of r(radius)   :   ");
    scanf("%f",&r);
    printf("Area of circle          :   %f",pi*r*r);
}