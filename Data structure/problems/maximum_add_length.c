#include<stdio.h>
int findmaxAND(int arr[],int n){
     int maxAND=arr[0];
     for(int i=0;i<n;i++){
        int currentAND=arr[i];
        for(int j=i+1;j<n;j++){
            currentAND &=arr[j];
            if(currentAND > maxAND){
                maxAND = currentAND;
            }
        }
     }
     return maxAND;
}

int findMaxLength( int arr[],int n,int max){
    int sinlen =0, longlen=0;
    for(int i=0;i<n;i++){
       int  current = arr[i];
       if(current == max){
        sinlen +=1;
       }
       for(int j =i+1;j<n;j++){
        current &=arr[j];
        
        if(current == max){
            longlen = j-i+1;
        }
       }
    }
    if(longlen > sinlen ){
        return longlen;
    }
    else return sinlen;
}

int main(){
    int arr[]={1,2,3,3,2,2};
    int length = sizeof(arr)/sizeof(arr[0]);
    int max = findmaxAND(arr,length);
    int len= findMaxLength(arr,length,max);
    printf(" Length is : %d",len);
    return 0;
}