#include<stdio.h>
// modulo check by 2 is divisible or not 
// same for odd and even 
int main()
{
    // even->0
    // odd-> 1
    int x;
    printf("Enter the number :");
    scanf("%d",&x);
    //printf("The modulo is %d",x%2);
    printf("%d",x%2==0);
     // it compare it if both are zero it return 1(true)
     // 0 for false 
    return 0;
}