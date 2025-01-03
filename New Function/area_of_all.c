// write  a function to calculate area of a square , a circle
//and a rectangle
#include<stdio.h>
#include<math.h>
// function for square
void square(int side){
    double Area=side*side;
    printf("\nThe are of a square is %lf",Area);
}
// function for circle
void circle(int radi){
    double Area=3.14*pow(radi,2);
    printf("\nThe are of a circle is %lf",Area);
}

// function for rectangle
void rectangle(int length,int breadth){
    double Area=length*breadth;
    printf("\nThe are of a rectangle is %lf",Area);
}

int main(){
    int radious,length,breadth,side;
    printf("Enter the redious of the circle :");
    scanf("%d",&radious);
    printf("Enter the length and breadth :");
    scanf("%d %d",&length,&breadth);
    printf("ENter the side of the square :");
    scanf("%d",&side);

    square(side);
    circle(radious);
    rectangle(length,breadth);
    return 0;
}