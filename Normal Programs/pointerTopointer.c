#include<stdio.h>
int main(){
    int x,y,z;
    int *p,**PTP;
    // *p is a pointer which store the add. of another variable 
    // But **p is a pointer which store the add. of the another pointer 
    x=10;
    y=20;
    z=30;

    p=&x;
    printf("%d\n",*p);// is shows the value at add :> 10.
    printf("%d\n",x);
    printf("%x\n",p); // is show the value of p pointer or add. of the x variable 
    *p=100; // it means cange the value at add. :> 10 -> 100 . 
    printf("%d \t %d",x,*p);
    printf("%x",&p); // add. of the p pointer 

    // pointer to the pinter 

    PTP=&p;
    *PTP = &y; // it means that change the value( add. of x) stored at pointer p to add. of the y
    // now the pointer p indicate towards the y instand of the x variable 
    printf("\n\n%d",*p);
    printf("\n%d",y);
    printf("\n%x",&p);
    printf("\n%x",PTP);
    // we can also acess the value which the frist pointer indicates it means y value 
    printf("%d",**PTP);

    // Both are same same 
    // both pointer are change the value of the y indirectly
    *p=2000;
    **PTP =2000;

    printf("\n\n%d",y); // now it shows 2000 blc it modify
    printf("\n%x",&y); // add. of y

    printf("\n\n%d",x);
    printf("\n%x",&x); // add of x



}