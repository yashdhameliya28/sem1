#include<stdio.h>

void main()

{   int m1,m2,m3,m4,m5,per;

    printf("Enetr mark(m1)  :   ");
    scanf("%d",&m1);

    printf("Enetr mark(m2)  :   ");
    scanf("%d",&m2);

    printf("Enetr mark(m3)  :   ");
    scanf("%d",&m3);

    printf("Enetr mark(m4)  :   ");
    scanf("%d",&m4);

    printf("Enetr mark(m5)  :   ");
    scanf("%d",&m5);

    per=(m1+m2+m3+m4+m5)/5.0;

    if(per<=35){
        printf("Fail");

    }else if(36<=per>=45){
        printf("pass");
        
    }else if(46<=per>=60){
        printf("Second");

    }else if(61<=per>=70){
        printf("First");

    }else if(per>70){
        printf("Distinction");

    }

}

