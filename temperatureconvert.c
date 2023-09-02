//Print temperature from Fahrenheit to Celsius. (Formula: c=(((f-32)*5))/9)

#include<stdio.h>

void main()

{   int f;
    printf("Enter value of f(Fahernheit)    :   ");
    scanf("%d",&f);
    printf("celsius is                      :   %d",(((f-32)*5))/9);
}