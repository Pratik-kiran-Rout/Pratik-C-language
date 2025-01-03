// #include<stdio.h>
// int main()
// {
//     int item,x,y,z;
//     printf("The Item price is:");
//     scanf("%d",&item);
//     printf("\nEnter no of 100 rupees notes:");
//     scanf("%d",&x);
//      printf("\nEnter no of 10 rupees notes:");
//     scanf("%d",&y);
//      printf("\nEnter no of 1 rupees notes:");
//     scanf("%d",&z);

//      int sum = (100*x)+(10*y)+z;
//      printf("\nThe total Amount is %d ",sum);
//      sum<item?printf("\n0"):printf("\n1");
    
//     return 0;

// }
#include<stdio.h>

int main()
{
      int x,y,z,sum;
      scanf("%d %d %d ",&x,&y,&z);
    
     sum = (100*x)+(10*y)+z;
     sum<1000?printf("0"):printf("1");
     return 0;

}