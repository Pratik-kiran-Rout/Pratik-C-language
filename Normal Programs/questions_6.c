// #include<stdio.h>
// int main()
// {
//     int isSunday=1; // true 
//     int isSnowing=1; // true 
//     printf("%d",isSunday&&isSnowing);
//     return 0;
// }


// #include<stdio.h>
// int main()
// {
//     int itsRaining=0; // false
//     int itsMonday=1; // true 
//     printf("%d",itsMonday||itsRaining);
//     return 0;
// }


#include<stdio.h>
int main()
{  
    // 1-> true 
    // 0->false
    int x;
    printf("Enter the number ");
    scanf("%d",&x);
    printf("%d", x>9 && x<100);
    return 0;
}
