#include<stdio.h>

void main()

{   int u;
    float bill;
    printf("Enter value of u(Unit)  :   ");
    scanf("%d",&u);

    if(u<=50){
        bill=(u*0.50);
    }else if(u>50 && u<=150){
        bill=(50*0.50)+(u-50)*0.75;
        
    }else if(u>150  && u<=250){
        bill=(50)*0.5+(100)*0.75+(u-150)*1.20;
        
    }else if(u>250){
        bill=(50)*0.5+(100)*0.75+(150)*1.20+(u-250)*1.50;
        
    }

    bill=bill+bill*0.2;
    printf("Bill    :   %f",bill);
}