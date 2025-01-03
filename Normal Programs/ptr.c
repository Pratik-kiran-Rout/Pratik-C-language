#include<stdio.h>
int main() {
    int no = 10;
    int *ptr = &no;

    printf("%d\n",no);
    printf("%p\n",&no);
    printf("%d\n",&no);
    printf("%d\n",ptr);
    printf("%p\n",ptr);
    printf("%d\n",*ptr);
    printf("%p\n",*ptr);
    printf("%p\n",&ptr);
    printf("%d\n",&ptr);
}