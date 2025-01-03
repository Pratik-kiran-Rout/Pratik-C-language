#include<stdio.h>
int main(){
    int num;
    printf("Enter the number :");
    scanf("%d",&num);
    for(int i=10;i>=1;i--){
        printf("\n%d*%d = %d",num,i,num*i);
    }
    return 0;
}