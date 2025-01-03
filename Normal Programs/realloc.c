#include<stdio.h>
#include<stdlib.h>
int main() {
    int n,i,*ptr;
    printf("Enter total number of values: ");
    scanf("%d",&n);
    ptr = (int*)calloc(n,sizeof(int));
    printf("Enter the values: \n");
    for(i=0;i<n;i++){
        scanf("%d",(ptr+i));
    }
    printf("Enter updated number of values: ");
    scanf("%d",&n);
    int *ptr1 = (int*)realloc(ptr,n*sizeof(int));
    printf("Previous address: %d , New address: %d\n",ptr,ptr1);
    printf("The entered values are: \n");
    for(i=0;i<n;i++){
        printf("%d\t",*(ptr1+i));
    }
    free(ptr1);
}