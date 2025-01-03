#include<stdio.h>

 int Totalwater(int arr[],int n){
     int right=n-1;
     int left=0;
     int add=0;
     int rightbar=arr[n-1];
     int leftbar=arr[0];
     while(left<=right){
          if(leftbar>=rightbar){
               if(arr[right]>=rightbar){
                    rightbar=arr[right];
                    right--;
               }
               else{
                    add+=rightbar-arr[right];
                    right--;
               }
          }
          else{
               if(arr[left]>=leftbar){
                    leftbar=arr[left];
                    left++;
               }
               else{
                    add+=leftbar-arr[left];
                    left++;
               }
          }
     }
     return add;
 }
 
 int main(){
     int arr[]={3,0,5,2,0,2,7,4,2,5,2};
     int length = sizeof(arr)/sizeof(arr[0]);
     printf("The total water stored is :%d",Totalwater(arr,length));
     return 0;

}