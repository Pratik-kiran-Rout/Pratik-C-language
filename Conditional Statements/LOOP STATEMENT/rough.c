#include<stdio.h>
int main(){
    int x;
    printf("Enter the number ");
    scanf("%d",&x);
    for(int i=x;1;i++){ // 1 for alwayes true 
         if(x%2!=0){
            break;
         }
         printf("The entered number is even");
         printf("\nEnter the number ");
         scanf("%d",&x);
    }
    printf("The number is odd");
    return 0;
}