#include<stdio.h>
int main()
{
    int temp,a,b;
    printf(" Enter the A and B ");
    scanf("%d %d",&a,&b);
    printf("The A num is %d and The B num is %d ",a,b);
    temp = a;
    a=b;
    b=temp;
    printf("\n\nAfter swapping \n\nThe A num is %d and The B num is %d ",a,b);
    return 0;
}