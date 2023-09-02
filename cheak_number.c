//Input an integer number and check the last digit of number is even or odd.

#include<stdio.h>

void main()

{   int a;
    printf("Enter value of a    :   ");
    scanf("%d",&a);

    if(a%2==0){
        printf("This number last digit is even.");

    }else {
        printf("This number last digit is odd.");
    }

}