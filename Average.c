#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a,b,c,avg;
    printf("enter the first number");
    scanf("%d",&a);
    printf("enter the second number");
    scanf("%d",&b);
    printf("enter the third number");
    scanf("%d",&c);
    avg=(a+b+c)/3;
    printf("the average number is,%d",avg);
}