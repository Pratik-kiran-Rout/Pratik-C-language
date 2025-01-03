#include<stdio.h>
int main()
{
    int year;
    printf("Enter the Year:");
    scanf("%d",year);
    if(year%4==0 && year%100!=0||year%400==0)
    {
        printf("It Is A Leaf Year");
    }
    else
    {
        printf("It Is Not A Leaf Year");
    }
    return 0;
}