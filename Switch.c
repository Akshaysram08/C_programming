#include<stdio.h>
#include<stdlib.h>
int main()
{
    int choice;
    printf(" \n1 for porotta \n2 for Biriyani \n3 for Kuboos&alfam \nEnter your choice:\n");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:
        {
            printf("You have selected porotta");
            break;
        }
        case 2:
        {
            printf("You have selected Biriyani");
            break;
        }
        case 3:
        {
            printf("You have selected Kubboos&alfam");
         

        }
        default:
            printf("the choice is invalid");
    }
 
}