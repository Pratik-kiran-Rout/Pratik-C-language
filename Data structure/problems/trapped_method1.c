// Method 1 by using the extra array method  
// time complex O(n*n*n) and space is O(n)
#include<stdio.h>

int min(int x,int y){
     return x<y?x:y ;
}

int Totalwater(int arr[],int n){
int left[n];
int right[n];
int add=0;
left[0]= arr[0];
//  two left and right array are stored 
for(int i =1;i<n;i++){
 
   if (arr[i]> left[i-1]){
     left[i] = arr[i];
   }else{
     left[i]=left[i-1];
   }
}
// we can use the terniary operator 
right[n-1]=arr[n-1];
for (int j=n-2;j>0;j--){ 
     right[j]= arr[j]>right[j+1] ? arr[j] : right[j+1];
   }

for(int i=0;i<n;i++){
   add+= min(left[i],right[i]) - arr[i];
}
return add;
}

int main(){
     int arr[]={3,0,5,2,0,2,7,4,2,5,2};
     int length = sizeof(arr)/sizeof(arr[0]);
      printf("The total water stored is :%d",Totalwater(arr,length));
     return 0;
}

