#include<stdio.h>
// ladder else if
int main()
{
    double n1,n2,n3;
    printf("Enter Three Number :");
    scanf("%lf %lf %lf",&n1,&n2,&n3);
    if(n1>n2 && n1>n3)
    printf("%.1lf Is The Greatest Number ",n1);

    else if(n2>n1 && n2>n3)
    printf("%.1lf Is The Greatest Number ",n2);

    else
    printf("%.1lf Is The Greatest Number ",n3);

    return 0;

}