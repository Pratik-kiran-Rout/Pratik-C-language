#include<stdio.h>
//The sum of first n number 
// and print the number in reverse order
// for 
int main()
{
    int n,sum=0; // initialize
    printf("Enter the number:");
    scanf("%d",&n);

    //for(int i=1,j=n;i<=n && j>=1;i++,j--) 
    // 'i' is for sum and 'j' is for reverse 
         
  //or " sirf eak variable use kar sakte hai" 
  //OR both are correct 

     for(int i=n;i>=1;i--) // sum reverse hoo ya fir 1st se hoo koin farak nahi padega 
    {
        sum=sum+i; // or sum+=i;
        printf("%d\n",i);
                           // printf("The sum is :%d\n",sum);
    }
     printf("The Total sum is :%d\n",sum);

    return 0;

}


// sum of first 15 number 
// for 

/*
#include<stdio.h>
int main ()
{
    int x,sum=0;
    printf(" Enter the number:");
    scanf("%d",&x);
      for(int i=x;i>=1;i--) // for(int i=1,j=x;i<=x&&j>=1;i++,j--)
    {
        sum = sum + i;
        printf("%d\n",i);

    }
    printf("The sum is %d\n",sum);
    return 0;
}*/

 
           // while 

/*#include<stdio.h>
int main()
{
    int x,sum=0;
    printf("Enter the number :");
    scanf("%d",&x);
    int i=x;
    while(i>=1)
    {
        sum=sum+i;
        printf("%d\n",i);
        i--;
        
    }
    printf("The sum is %d\n",sum);
    return 0;

}*/
/* #include<stdio.h>
int main()
{
    int x,sum=0;
    printf("Enter the number:");
    scanf("%d",&x);
    int i=x;
    do
    {   sum=sum+i;
        printf("%d\n",i);
      
    } while (--i);
   
     printf("The sum is %d",sum);
     return 0;

    
}
*/