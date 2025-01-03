#include<stdio.h>
int main()
{
    int x;
    printf("Enter the number for table ");
    scanf("%d",&x);
    printf("The required table is :");
    for(int i=1;i<=10;i++)
    {
        printf("\n %d * %d =%d ",x,i,x*i);

    }
   return 0;
}
