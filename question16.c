#include <stdio.h>

int main() {
    int row=3,column=5;
    for(int i=1;i<=row;i++){
        for(int j=1;j<=(row-i);j++){
            printf(" ");
        }
        for(int k=1;k<=(2*i-1);k++){
            printf("*");
        }
        printf("\n");
    }

    return 0;
}