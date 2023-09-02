//Enter basic salary of an employee and calculate Gross salary according to given conditions:
//- Basic Salary >= 10000 : HRA = 20% of basic, DA = 80% of basic
//- Basic Salary >= 20000 : HRA = 25% of basic, DA = 90% of basic
//- Basic Salary >= 30000 : HRA = 30% of basic, DA = 95% of basic

#include<stdio.h>

void main()

{   int bs,s;
    printf("Enter a value of bs(basic salary)   :   ");
    scanf("%d",&bs);

    if(bs>=10000){
        s=(bs*20/100)+(bs*80/100)+bs;
        printf("%d",s);

    }else if(bs>=20000){
        s=(bs*25/100)+(bs*90/100)+bs;
        printf("%d",s);

    }else if(bs>=30000){
        s=(bs*30/100)+(bs*95/100)+bs;
        printf("%d",s);
    }
}