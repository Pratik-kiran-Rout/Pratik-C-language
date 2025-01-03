#include<stdio.h>
int  main()
{
    for (int i=1;i<=5;i++)
    {
        if(i==4)
        { break ; 
        }
        printf("%d\n",i);
    }
    printf("end");
    return 0;
} 