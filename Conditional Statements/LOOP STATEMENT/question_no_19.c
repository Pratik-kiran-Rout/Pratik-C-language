// print all the number from 1 to 10  except 6 and 7
 #include<stdio.h>
 int main(){
    int num = 10;
    for(int i=1;i<=10;i++){
        if(i== 6 || i==7){
            continue;
        }
        printf("%d\n",i);
    }
    printf("Thank you !");
 }