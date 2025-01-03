#include<stdio.h>
int main()

{
    int day; // 1->mon,2->tuesday,3->wednesday ....
    printf("Enter The Days (1-7):"); // you can also crreate by using first character 
    scanf("%d",&day);
    switch(day)
    {
     case 1:printf("Monday");   // Syntex : case 'm': printf(" Monday ");                       
     break;                    //  break;
     
     case 2:printf("Tuesday");
     break;

     case 3:printf("Wednesday");
     break;

     case 4:printf("Thusday");
     break;

     case 5:printf("Friday");
     break;

     case 6:printf("Saturday");
     break;

     case 7:printf("sunday");
     break;
     default:printf("Enter the valid  Day Number");
     break;

    }
    return 0;
}
