#include<stdio.h>
#include<stdlib.h>
int main()
{
    int num1,num2,choice,result;
    printf("Enter two numbers");
    scanf("%d%d",&num1,&num2);
    printf("Enter your Choice \n1.Add\n2.subtract\n3.Multiply\n4.Divide");
    scanf("%d",&choice);
    if(choice==1)
    {
        result=num1+num2;
        printf("The sum is result is :%d",result);

    }
    else if(choice==2)
    {
        result=num1-num2;
        printf("The Subtraction result is :%d",result);
    }
    else if(choice==3)
    {
        result=num1*num2;
        printf("The multiplication result is :%d",result);
        
    }
    else if(choice==4)
    {
        result=num1/num2;
        printf("The division result is :%d",result);
    }
    else
    {
        printf("The choice is invalid");
    }

}