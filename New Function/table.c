#include<stdio.h>
void Table(int x){ // parameter / formal parameter
     // no return value to any fuction
    for(int i=1;i<=10;i++){
        printf("\n%d * %d = %d",x,i,x*i);
    }
}
int main(){
    int num;
    printf("Enter the number ");
    scanf("%d",&num);
    Table(num);// argument / actual parameter
    // function calling and arguments passing
    return 0;
} 