#include<stdio.h>
int main()
{
    int x=5;
    /*
    n++ || n-- :- post increment/decrement 1st it print n then incre or decre by 1
    ++n || --n :- pre increment/decrement 1st it incre/decre by 1 then it print new value
    */ 
    printf("%d",x++); // use,then incre/decre   //it already incre 6 but it 1st print 5
    printf("\n%d",x); // print 6
    printf("\n%d",x--); //incre / decre then use  //it already drecre 5 but it 1st print 6
    printf("\n%d",x); // print 6
    printf("\n%d",x++);
    printf("\n%d",x++);
     printf("\n%d",x--);
      printf("\n%d",x);
       printf("\n%d",++x);
        printf("\n%d",--x);
         printf("\n%d",x++);
         printf("\n%d",x);
         printf("\n%d",x++);
         
        return 0;

}