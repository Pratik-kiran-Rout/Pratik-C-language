#include<stdio.h> // library
// we can call any function by using indirect method 
void namaste();
void bonjour();

void namaste(){
    printf("Namaste :)\n");
    bonjour();// function calling
}
 
void bonjour(){
    printf("Bonjour !");
}


int main(){
    char cha;
    printf("Enter 'i' if you are indian \nEnter 'j' if french \n:");
    scanf("%c",&cha);
    if(cha=='i'|| cha=='j'){
        namaste();
    }
    // here by using main funtion we call namaste function
    // and namaste call bnjour funtion indirectly 
    // that's why for both the cases both namaste and bonjour print
    return 0;
}