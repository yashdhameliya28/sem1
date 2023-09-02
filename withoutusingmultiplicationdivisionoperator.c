//Multiply and divide a number by 2 without using multiplication/division operator.

#include<stdio.h>

void main()

{   int a,multiplication,division;
    printf("Enter value of a    :   ");
    scanf("%d",&a);

    printf("multiplication  =   %d\n",(a<<1));

    
    printf("division        =   %d",(a>>1));
  

}