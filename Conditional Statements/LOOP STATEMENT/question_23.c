// calculate the sum of all the numbers between 5 to 50 
#include<stdio.h>
int main(){
    int x,y,sum=0;
printf("Enter the two number ");
scanf("%d %d",&x,&y);
for(int i=x;i<=y;i++){
   sum+=i;
} 
printf("The sum of all number between %d to %d is %d",x,y,sum);
return 0;
}