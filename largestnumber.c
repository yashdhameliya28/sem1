//Find out largest number from given three numbers.

#include<stdio.h>

void main()

{   int a,b,c,max;

    printf("Enter value of a    :   ");
    scanf("%d",&a);

    printf("Enetr value of b    :   ");
    scanf("%d",&b);

    printf("Enter value of c    :   ");
    scanf("%d",&c);

    max=(a>b)?((a>c)?a:c):((b>c)?b:c);
    
    printf("max value           :   %d",max);


}