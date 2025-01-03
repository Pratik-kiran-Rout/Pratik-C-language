#include<stdio.h>
// changing paramter in function does't change the values in 
int calculate(float value){
    float gst=value+(0.18*100);
    printf("The value is with added gst is %f",gst);
    return 0;
}
int main(){
float value;
printf("Enter the price");
scanf("%f",&value);
printf("\nThe value of actual value is %f",value);
calculate(value);
}