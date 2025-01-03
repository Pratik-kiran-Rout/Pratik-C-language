#include<stdio.h>
#include<string.h>
int main(){
char arr[]="5555";
char *ptr = arr;
// printf("%s",ptr);
for(int i =0;i<strlen(arr);i++){
     printf("%c\t",arr[i]);
}
return 0;
}
