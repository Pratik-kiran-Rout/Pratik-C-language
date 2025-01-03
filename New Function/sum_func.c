#include<stdio.h>
int Sum(int a,int b){
    int sum=a+b;
    // or return a+b;
    return sum;
}
int main(){
    int a,b,sum;
    printf("Enter the number a :");
    scanf("%d",&a);
     printf("Enter the number b :");
    scanf("%d",&b);
    sum=Sum(a,b); // value passing
    printf("The sum of two number is %d",sum);
    return 0;
}