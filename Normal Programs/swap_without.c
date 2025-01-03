#include<stdio.h>
int main()
{
    int a,b;
    printf(" Enter the A and B ");
    scanf("%d %d",&a,&b);
    printf("The A num is %d and The B num is %d ",a,b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("\n\nAfter swapping \n\nThe A num is %d and The B num is %d ",a,b);
    return 0;
}