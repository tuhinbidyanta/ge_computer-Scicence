// 4. Write a C program to find whether a user given year is leap year or not
//BY TUHIN BIDYANTA
#include <stdio.h>

int main() {
    int year;
    printf("enter the four digit year \n");
    scanf("%d",&year);
    if(year%4==0){
        printf("this is leap_year");
    }
    else{
        printf("this is not leap_year");
    }

    return 0;
}