// print the facrtorial of a number 
#include<stdio.h>
int main(){
int num,facto=1;
printf("Enter the number ");
scanf("%d",&num);
if(num>0){
    for(int i=1;i<=num;i++){
        facto=facto*i;
    }
}
else{
    printf("Enter the valid number");
}
printf("The factorial of a number %d is %d",num,facto);
return 0;
} 