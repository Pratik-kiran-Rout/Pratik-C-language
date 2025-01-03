#include<stdio.h>
void greetings(char cha);
void greetings(char cha){
if(cha=='i'){
printf("Namaste :)");
}
else if(cha=='j'){
    printf("Bonjour");
}
else
printf("Thank you !");

}
int main(){
    char cha;
    printf("Enter 'i' if you are indian \nEnter 'j' if french \n:");
    scanf("%c",&cha);
    greetings(cha);
    return 0;
}