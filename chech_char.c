//Check whether the entered character is upper case, lower case, digit or any special character.

#include<stdio.h>

void main()

{   char ch;
    printf("Enter any value :   ");
    scanf("%c",&ch);

    if(ch>='A' && ch<='Z'){
        printf("upper case");

    }else if(ch>='a' && ch<='z'){
        printf("lower case");

    }else if(ch>='0' && ch<='9'){
        printf("digit");

    }else if(ch=='!','@','#','$','%','^','&','*'){
        printf("special character");
        
    }

}

