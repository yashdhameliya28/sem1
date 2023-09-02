//Check whether the given number is odd or even using bitwise operator.

#include<stdio.h>

void main()

{   int a;
    printf("Enter value of a    :");
    scanf("%d",&a);

    if(a&1){
        printf("Given number is odd.");
    }else{
        printf("Given number is even.");
    }
     
}