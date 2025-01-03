#include<stdio.h>
void helloHW(int count){ // parameter or copy of original value
    if(count==0){ // condition for recursion 
        return; // only return is for void 
    }
         printf("\nHello world :)"); 
        helloHW(count-1);
        /*it reduces the value then pass the value 
        to its self */
        // Function calling 
 
}
int main(){
    int num;
    printf("Enter the number ");
    scanf("%d",&num);
    helloHW(num); // argumrents 

}        // it is called function recursion 