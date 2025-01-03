// #include<stdio.h>
// int main() {
//   int bit,count=0,flag=0,sum=0;
//   scanf("%d",&bit);
//   while(bit!=-1) {
//     if(bit==1){
//       flag=1;
//       count+=sum;
//       sum = 0;
//       scanf("%d",&bit);
//     }
//     if(flag)
//       if(bit==0)
//       sum++;
//       scanf("%d",&bit);
//   }
//   printf("%d",count);
//   return 0;
// }


#include <stdio.h>

int main() {
    int a;
    int count = 0;


    while (1) {
        scanf("%d", &a);

        if (a == -1) {
            break;
        }

        if (a == 1) {
            count++;
        }
    }

    if (count % 2 == 0) {
        printf("1");
    } else {
        printf("0");
    }

    return 0;
}