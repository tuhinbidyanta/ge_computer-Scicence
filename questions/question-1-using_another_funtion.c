#include<stdio.h>
// by TUHIN BIDYANTA
// . Write a C program to find the factorial of a given integer using Function

int factorial(int factorial_number){
    int increament, result = 1;
    printf("give the value of factorial number   ");
    scanf("%d", &factorial_number);
    for (increament = 1; increament <= factorial_number; ++increament)
    {
        result = increament * result;
    }
    printf("%d", result);
    return result;
}

int main(){
    factorial(4);
    return 0;
}