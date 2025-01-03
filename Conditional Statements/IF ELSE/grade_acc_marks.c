#include<stdio.h>
int main()
{
    int marks;
    printf(" Enter the Mark :");
    scanf("%d",&marks);
    if(marks<30 && marks>=0)
    printf("GRADE C");
    
    else if(marks>=30 && marks<70)
    printf("GRADE B");

    else if(marks>=70 && marks<90)
    printf("GRADE A");
    
    else if(marks>=90 && marks<=100)
    printf("GRADE A+");

    else
    printf("WRONG MARK");
    // due to single statement there is no requirement of {}

    return 0;
}