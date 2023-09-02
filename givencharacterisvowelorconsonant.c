//Check whether given character is vowel or consonant.

#include<stdio.h>

void main()

{   char ch;

    printf("Enter any alphabt ch    :   ");
    scanf("%f",&ch); 

    //hint  ( ch==a || ch==e || ch==i || ch==o || ch==u )

    if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' ){
        printf("Given alphabt is vowel.");
    }else{
        printf("Given alphabt is consonant.");
    }
    

   
}
