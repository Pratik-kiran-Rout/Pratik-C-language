#include<stdio.h>
int main()
{
    int marks;
    printf("Enter the Marks:");
    scanf("%d",&marks);
//Ternary op.:-marks>30?printf("PASS"):printf("FAIL");
    if(marks>=30 && marks<=100)
    {
        printf("PASS");
    }
    else if(marks<30 && marks>=0)
    printf("FAIL");  // due to single statement no need of {}

    else{
   printf("Wrong Marks");
    }
return 0;
} 