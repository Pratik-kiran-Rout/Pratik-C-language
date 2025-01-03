#include<stdio.h>
int main ()
{
    double p_value,interest,rate,time;
    printf("\nEnter the principle value :");
    scanf("%lf",&p_value);
     printf("\nEnter the interest rate :");
    scanf("%lf",&rate);
     printf("\nEnter the time duration :");
    scanf("%lf",&time);
    interest=(p_value*time*rate)/100;
    printf("\nThe simple interest is %lf",interest);
     return 0;

}