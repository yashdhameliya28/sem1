#include<stdio.h>

void main()
{
    int s,h,m;
    printf("Enter value of s(Second)    :   ");
    scanf("%d",&s);

    m=s/60;
    h=s/3600;
    s=s-60;

    printf("%d:%d:%d",h,m,s);

}