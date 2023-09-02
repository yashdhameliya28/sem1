//Print simple interest. (principal*roi*time period)/100

#include<stdio.h>

void main()

{   int p,r,tp;
    printf("Enetr value of p(principal)     :   ");
    scanf("%d",&p);
    printf("Enter value of r(Roi)           :   ");
    scanf("%d",&r);
    printf("Enter value of tp(Time period)  :   ");
    scanf("%d",&tp);
    printf("Simple interest is              :   %d",(p*r*tp)/100.0);
}