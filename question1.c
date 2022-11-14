#include <stdio.h>

int main() {
    // Write C code here
    printf("Hello world");
    int factorial_number,increament,result=1;
    printf("give the value of factorial number   ");
    scanf("%d",&factorial_number);
    for(increament=1;increament<=factorial_number;++increament){
        result=increament*result;
    }
    printf("%d",result);


    return 0;
}