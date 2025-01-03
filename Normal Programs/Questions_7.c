#include<stdio.h>
// Avarage number 
int main ()
{
  int x,y,z;
  printf("Enter the three number :");
  scanf("%d %d %d",&x,&y,&z);
  double avarage =(x+y+z)/3;
  printf("The Avarage is %.2lf",avarage);
  return 0;

}