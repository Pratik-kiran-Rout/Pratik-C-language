#include<stdio.h>
// Check is is upper case or not
int main ()
{
 char ch;
 printf("Enter The Character:");
 scanf("%c",&ch);
 if(ch>='A'&& ch<='Z')
 //ch >=97 & ch>='a' Both are same 
 {
  printf("Upper case ");
 }
 else if(ch>='a'&& ch<='z')
 {
    printf("Lower case");
 }
 else{
    printf("NOT A ENGLISH LETTER");
 }
 return 0;
 
}