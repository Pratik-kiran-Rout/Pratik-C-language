// Area of the sqaure and area (peremeter )of the circle 
#include<stdio.h>
int main()
{
    int side ,diameter; // 
    printf("Area of the square ");
    printf("\nEnter the side of the square ");
    scanf("%d",&side);
    printf("\nThe area is %d",side*side);

    printf("\nArea of the circle ");
    printf("\nEnter the diameter of the circle :");
    scanf("%d",&diameter);
    /* If you want to solve this programe by using 
    radious the create another variable radious 
     
      int radious = diameter/2
     int area = 3.14*(radious*radious);
     printf (" the area  is %d",area );
    */ 
     float radious = diameter/2;
     float peri = 2*3.14*radious;
     printf (" the perimeter  is %.3f",peri ); //.3 for upto 3 decimal
    
    double area= ((diameter*diameter)/4)*3.14;
    printf("\nThe area is %.2lf",area); // .2 for upto two decimal 
    return 0;
}