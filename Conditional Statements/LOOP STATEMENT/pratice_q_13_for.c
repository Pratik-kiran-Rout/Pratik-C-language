// print the number upto zero to ten  10 
#include<stdio.h>
int main ()
{
    int n;
    printf("Enter the number ");
    scanf("%d",&n);
    for (int i=0;i<=n;i++)// or i=i+1 or i+=1
    {
        printf("%d \n",i);
    }
    return 0;
}