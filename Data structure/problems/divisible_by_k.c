#include<stdio.h>
#include<stdbool.h>

bool check(int arr[],int n,int k){
int rem;
int remfre[k];
for(int i=0;i<k;i++){
     remfre[i]=0;
}
for(int i=0 ; i<n ; i++){
    rem = arr[i]%k;
    
    if(rem<0){
     rem+=k;
    }
    remfre[rem]++;
}
if(remfre[0]%2 !=0) {
     return false;
}
for(int i=1;i<k/2;i++){
     if(remfre[i]!=remfre[k-i]){
             return false;
     }
}
return true;

}
int main(){
     int arr[]={1,2,3,4,5,10,6,7,8,9};
     int n =sizeof(arr)/sizeof(arr[0]);  
     int k;
     printf("Enter the number");
     scanf("%d",&k);

     if(check(arr,n,k)){
          printf("True");
     }
     else printf("False");
     return 0;
}