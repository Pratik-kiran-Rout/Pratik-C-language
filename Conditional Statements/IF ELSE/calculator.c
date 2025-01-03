#include<stdio.h>
int main()
{   
    int x,y;
    char Symbol;
     
    printf("\nEnter your Arithmatic sign :"); // signs like " * , / - + "  these are all characters
    scanf("%c",&Symbol);
    printf(" Enter two Numbers X and Y :");
    scanf("%d %d",&x,&y);
   
    switch(Symbol)
    {
        case '+':printf("The sum of %d + %d is = %d",x,y,x+y);
        break;

        case '-':printf("The minus of %d - %d is = %d",x,y,x-y);
        break;

        case '*':printf("The multiplication of %d * %d is = %d",x,y,x*y);
        break;

        case '/':
        if(y!=0)
        {
        printf("The division  of %d / %d is = %.2lf",x,y,x/y);
        }
        else
        {
          printf("Error! Devision by zero is not Allowed");
        }

        break;

        case '%':printf("The modulo of %d + %d is = %.2lf",x,y,x+y);
        break;

        defalut:printf("\nENTER THE VALID SIGN");
        break;
    }
    return 0;
    
}