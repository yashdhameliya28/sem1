//Check whether the given number is odd or even.

#include<stdio.h>

void main()

{   int a;
    printf("Enter value of a    :   ");
    scanf("%d",&a);
    if(a%2!=0){
        printf("a is odd number.");
    }else{
        printf("a is even number.");
    }
}