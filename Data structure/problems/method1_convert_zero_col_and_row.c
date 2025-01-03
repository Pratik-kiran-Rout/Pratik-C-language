#include<stdio.h>
void convert(int arr[5][4], int n , int m){
     int row_zero=0;
     int col_zero=0;
     for(int i=0 ; i<n ;i++){
          if(arr[i][0]==0){
             row_zero+=1;
             break;
          }
     }
      for(int j=0 ; j<n ;j++){
          if(arr[0][j]==0){
             col_zero+=1;
             break;
          }
     }
     for(int i=1;i<n;i++){
          for(int j=1;j<m;j++){
             if(arr[i][j]==0){
               arr[i][0]=0;
               arr[0][j]=0;
             }
          }
     }
     for(int i =0;i<n;i++){
          if(arr[i][0]==0){
               for(int j=0;j<m;j++){
                    arr[i][j]=0;
               }
          }
     }
     for(int j =0;j<m;j++){
          if(arr[0][j]==0){
               for(int i=0;i<n;i++){
                    arr[i][j]=0;
               }
          }
     }
     if(row_zero){
          for(int i=0;i<n;i++){
               arr[i][0]=0;
          }
     }
     if(col_zero){
          for(int j=0;j<m;j++){
               arr[0][j]=0;
          }
     }
     printf("The converted array is !\n");
    for(int i=0;i<n;i++){
          for(int j=0;j<m;j++){
             printf("%d\t",arr[i][j]);
             }
     printf("\n");
      }
}
int main(){
     int arr[5][4];
     int n=5,m=4;
     printf("Enter the numbers \n");
     for(int i=0;i<n;i++){
          for(int j=0;j<m;j++){
                scanf("%d",&arr[i][j]);
             }
             printf("\n");
     }
     for(int i=0;i<n;i++){
          for(int j=0;j<m;j++){
             printf("%d",arr[i][j]);
             }
     printf("\n");
   }
   convert(arr,5,4);
   return 0;

}