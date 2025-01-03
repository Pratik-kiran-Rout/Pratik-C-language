#include<stdio.h>
int main()
{
int n,i=1; // initilize
printf("Enter the number:");
scanf("%d",&n);
do{
    printf("%d\n",i); // statement
    printf("Hello World\n");
    i++; // increment or decrement 
}
while(i<=n); // condition, in the end add semicolon

return 0; 
}  