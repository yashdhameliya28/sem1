//Perform Addition, Subtraction, Multiplication and Division of 2 numbers as per user’s choice.

#include<stdio.h>

void main()

{   int a,b;
    char p;
    printf("What you do '+','-','*','/' :   ");
    scanf("%c",&p);

    printf("Enter value of a            :   ");
    scanf("%d",&a);

    printf("Enter value of b            :   ");
    scanf("%d",&b);

    
    if(p=='+'){
        printf("%d",a+b);

    }else if(p=='*'){
        printf("%d",a*b);

    }else if(p=='-'){
        printf("%d",a-b);

    }else if(p=='/'){
        printf("%d",a/b);
    }


}