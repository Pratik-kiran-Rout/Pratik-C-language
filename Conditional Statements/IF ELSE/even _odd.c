#include<stdio.h>
//Nested if Statement 
int main ()
{
    int num;
    printf("Enter the Number:");
    scanf("%d",&num);
    if(num>=0)
    {
        printf("The Number is positive");
        if(num%2==0)
        {
            printf("\nThe number is even");/* num%2==0?printf("Even Number"):printf("Odd number");*/
        }
        else{
            printf("\nThe number is odd");
        }
    }
    else
    {
        printf("The number is negative");
    }
    return 0;
}


