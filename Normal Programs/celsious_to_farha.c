#include<stdio.h>
int main ()
{
    double cel;
    printf("Enter the Celsious :");
    scanf("%lf",&cel);
    double farh=(cel*1.8)+32; // 9/5=1.8
    printf(" The requiredn farhanite is :%.2lf",farh);
    return 0;
} 