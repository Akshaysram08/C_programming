#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a,b,temp;
    printf("enter values of a and b");
    scanf("%d%d",&a,&b);
    temp=a;
    a=b;
    b=temp;
    printf("the values of a and b after swapping is %d and %d",a,b);

}