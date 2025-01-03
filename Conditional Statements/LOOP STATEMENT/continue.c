// print all the number from 1 to 5 except 3
#include<stdio.h>
int main()
{
 int num =5;
  for(int i=0;i<=num;i++){
    if(i==3){
        continue;
    }
    printf("%d\n",i);
  }
}