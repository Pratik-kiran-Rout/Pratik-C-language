#include<stdio.h>
#include<stdlib.h>
int* Sum(int *num, int len,int target,int*sum){
   for(int i=0; i<5; i++){
    for(int j=1; j<5; j++){
        if(num[i]+num[j]==target){
            sum[0]=i;
            sum[1]=j;
            return sum;
            break;
        }
       }    
    }
}
int main(){
    
    int* num=(int*)malloc(5*sizeof(int));
    int* sum=(int*)malloc(2*sizeof(int));
    printf("Enter:");
    for(int i=0; i<5; i++){
        scanf("%d",&num[i]);
    }
    // len=sizeof(num)/sizeof(num[0]);
  sum = Sum(num,5,7,sum);
  if(sum!=NULL){
   printf("The index value are %d %d",sum[0],sum[1]);
  }
  else
  printf("not found")
   free(num);
   free(sum);
}