#include<stdio.h>
void hello();
void bye(); // function declaration

void hello(){
    printf("Hello !\n");
    printf("My name is pratik\n");
}
 void bye(){
    printf("Good bye :) \nnice to meet you");
 }
int main(){
    hello();
    bye(); // function call
    return 0;
}