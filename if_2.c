#include<stdio.h>
#include<stdlib.h>
int main()
{
    int num1,num2;
    printf("enter two numbers");
    scanf("%d%d",&num1,&num2);
    if(num1>num2)
    {
        printf("%d is the greater number",num1);
    }
    else
    {
        printf("%d is the greater number",num2);
    }
}
