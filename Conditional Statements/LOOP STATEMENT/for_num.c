#include<stdio.h>
int main()
{
   // int i; its optional
   printf("Print upto 1 in decresing order from 5");
        //iterator ; countor 
    for(int i=5;i>=1;i--)
    {
        printf("\n%d \n",i);
    }
       // we can use also floating value 
    for(double j=1.0;j<=5.0;j++)
    {
        printf("\n%.2lf \n",j);
    }
       // For character ( blc we know about Ascaii value )
    for(char CH='A';CH<='Z';CH++)
    {
        printf("\n%C \n",CH);
        // for Ascaii value
        printf("%d \n",CH);
    }

     for(char ch='a';ch<='z';ch++)
    {
        printf("\n%C \n",ch);
        // for  Ascaii value 
        printf("%d \n",ch);
    }
  return 0;


}
