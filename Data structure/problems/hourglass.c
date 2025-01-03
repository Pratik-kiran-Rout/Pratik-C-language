#include<stdio.h>
#include<limits.h>
int max1=INT_MIN;
int max(int arr[6][6],int n){
    for (int i=0;i<=3;i++){
        for (int j=0;j<=3;j++){
           int top = arr[i][j]+arr[i][j+1]+arr[i][j+2];
          int  mid = arr[i+1][j+1];
           int  bottom = arr[i+2][j]+arr[i+2][j+1]+arr[i+2][j+2];
          int  sum=top+mid+bottom;
            if (sum>max1){
                max1=sum;
            }
        }
    }
    return max1;
}

int main(){
    int arr[6][6];
    printf("Enter the number !\n");
    for(int i =0;i<6;i++){
        for(int j=0;j<6;j++){
            scanf("%d \t",&arr[i][j]);
        }
    printf("\n");
    }
    int x = max(arr,sizeof(arr)/sizeof(arr[0]));
    printf("The maximum Hourglass value is :%d",x);
    return 0;
}