#include <stdio.h>
//BY TUHIN BIDYANTA
// 12. Write a C program to find the gcd (greatest common divisor) of two given integers

int main() {
    int num1,num2;
    printf("first integer value ");
    scanf("%d",&num1);
    printf("secoend integer value ");
    scanf("%d",&num2);
    for(int i=1;(i<=num1 || i<=num2);i++){
        if(num1%i==0 && num2%i==0){
            printf("%d\n",i);
            
        }
    }
    

    return 0;
}