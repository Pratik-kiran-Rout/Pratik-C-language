// print all the odd number from 1 to 50 
#include<stdio.h>
int main(){
    int num;
    printf("Enter the number ");
    scanf("%d",&num);
    for(int i=1;i<=num;i++){
        
        if(i%2!=0){ //odd number
          printf("%d\n",i);
            }
                // or you can solve this question
                // by this way also   
        // if(num%2==0){
        //     continue; 
        // }
        // printf("%d\n",i);
    }
    return 0;
}