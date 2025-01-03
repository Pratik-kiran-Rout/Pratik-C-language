#include<stdio.h>
int main(){
    int size;
    printf("Enter size of array: ");
    scanf("%d",&size);
    int arr[size];
    printf("Enter array elements: \n");
    for(int i=0;i<size;i++) {
        scanf("%d",&arr[i]);
    }
    printf("Entered array:\n");
    for(int i=0;i<size;i++){
        printf("%d\t",&arr[i]);
    }
}