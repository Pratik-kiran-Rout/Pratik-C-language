// keep taking numbers as input from
//user until enter an odd number 
/*#include<stdio.h>
int main()
{
    int x;
    printf(" Enter the number :");
    scanf("%d",&x);
    for(int i=x;1;i++)
    {
        
        if(x%2 !=0)
        {
            break ;
        }
        printf("it is a even number %d",x);
        printf("\nEnter the number :");
        scanf("%d",&x);
    }
    printf("It is a odd number ");
    return 0;
}*/
#include<stdio.h>
int main()
{
    int x;
    do
    {
    printf("\nEnter the number :");
    scanf("%d",&x);
    if(x%2 !=0)
    {
        break ;
    }
    printf("It is a even number");
    }
    while(1); // 1 for always true 
    printf("It is a odd number");
    return 0;
}