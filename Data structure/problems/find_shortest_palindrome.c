#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void Reverse(char *str,int n){
     int st=0;
     int end = n-1;
     while(st<end){
          int temp = str[st];
          str[st]=str[end];
          str[end] = temp;
          st++;
          end--;
     }
}
char* FindSortest(char *s){
     if(strlen(s)==0){
          printf("Is a pallindrome !");
          return "" ;
     }
     int n= strlen(s);
     int st = 0 ;
     int end = n-1;
     while(end>0){
          if(s[st]==s[end]){
               st++;
          }
          end--;
     }
if (st==n){
     printf("is palindrome !");
     return s;
}
char* notpali = s+st+1;
int len = strlen(notpali);
char *NotPali = (char*)malloc((len+1)*sizeof(char));

strcpy(NotPali,notpali);
Reverse(NotPali,len);
char* wholepali = (char*)malloc((n+len+1)*sizeof(char));

strcpy(wholepali,NotPali);
strcat(wholepali,s);
free(NotPali);

return wholepali;
}

int main(){
char string[]="kshitish" ;// here greatest prefix is " abcdcba " which is a pali..
char *st = FindSortest(string);
printf("The shortest palindrome string is %s\n",st);
free(st);
return 0;
}