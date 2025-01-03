#include<stdio.h>
#include<stdbool.h>
void convert(int arr[5][4], int n , int m){
     bool col[m];
     bool row [n];
     for(int i=0 ; i<n ;i++){
          row[i]=false;
          }
     for(int j=0 ; j<m ;j++){
          col[j]=false;
     }

     for(int i=0;i<n;i++){
          for(int j=0;j<m;j++){
             if(arr[i][j]==0){
               row[i]=true;
               col[j]=true;
             }
          }
     }
   
     for(int i =0;i<n;i++){
          if(row[i]){
               for(int j=0;j<m;j++){
                    arr[i][j]=0;
               }
          }
     }
   
     for(int j =0;j<m;j++){
          if(col[j]){
               for(int i=0;i<n;i++){
                    arr[i][j]=0;
               }
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
             printf("%d\t",arr[i][j]);
             }
     printf("\n");
   }
   convert(arr,5,4);
   return 0;

}