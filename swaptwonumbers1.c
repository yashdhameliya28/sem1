//Swap two numbers. (without using temporary variable)

#include<stdio.h>

void main()

{   int a,b;
    printf("Enter value of a    :   ");
    scanf("%d",&a);
    printf("Enter value of b    :   ");
    scanf("%d",&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("a=%d    \nb=%d",a,b);
    

}