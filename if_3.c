#include<stdio.h>
#include<stdlib.h>
int main()
{
    int num1,num2,num3;
    printf("enter the first number");
    scanf("%d",&num1);
    printf("enter the second number");
    scanf("%d",&num2);
    printf("enter the third number");
    scanf("%d",&num3);
    if(num1>num2)
    {
        if(num1>num3)
        {
            printf("%d is the greatest number",num1);
        }
        else
        {
            printf("%d is the greatest number",num3);
        }
    }
    else{
            if(num2>num3)
            {
                printf("%d is the greatest",num2 );
            }
            else
            {
            printf("%d is the greatest",num3);
            }   
        }
}