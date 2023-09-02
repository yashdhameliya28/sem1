//Determine the roots of the equation ax2+bx+c=0. (find x value.)

#include<stdio.h>
#include<math.h>

void main()

{   int a,b,c;
    float x1,x2;

    printf("Enter value of a    :   ");
    scanf("%d",&a);

    printf("Enter value of b    :   ");
    scanf("%d",&b);

    printf("Enter value of c    :   ");
    scanf("%d",&c);

    x1=((-b)+(sqrt((b*b)-(4*a*c))))/(2*a);

    x2=((-b)-(sqrt((b*b)-(4*a*c))))/(2*a);
    
    printf("%f \t %f",x1,x2);

}