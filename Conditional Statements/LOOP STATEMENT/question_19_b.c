// Enter the number from 1 to n 
// except odd number 
#include<stdio.h>
int main(){
    int num;
    printf("Enter the number :");
    scanf("%d",&num);
    for (int i=1;i<=num;i++){
          if(i%2!=0){
            continue;
          }
          printf("%d\n",i);
    }
    printf("Thank you !");
    return 0;
}  