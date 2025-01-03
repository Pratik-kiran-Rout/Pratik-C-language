#include<stdio.h>
#include<math.h>

/*use librery function  to calculate the square of a 
number given by the user */
double squareNum(int n){ //parameter 
double squareN=pow(n,2); // power is pow in math.h
return squareN;
}
int main(){
int num;
printf("Enter the number");
scanf("%d",&num);
int square=squareNum(num); // arguments 
printf("the square of an number is %lf",square);
//function calling
}