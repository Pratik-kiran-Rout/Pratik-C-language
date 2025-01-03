#include<stdio.h>
int main()
{
    int age;
    printf("Enter the age : ");
    scanf("%d",&age);
    
    if(age>=18)
    {
        printf("Adult");
        printf("\nThay can vote ");
        printf("\nThay can drive");
    }

    else
    {
        printf("Minor");
    }
    printf("\nThank you");
    return 0;
}