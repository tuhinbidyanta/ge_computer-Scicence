// 2. Write a C program which takes two integer operands and one operator from user , performs the 
// operation and then prints the result
#include <stdio.h>

int main() {
    // Write C code here
    int a=100,b=10;
    char operator_user;
    printf("enter the operator (like +,*,-,/)");
    scanf("%c",&operator_user);
    
    switch(operator_user){
        case '+':
            printf("addition a + b = %d",a+b);
            break;
        case '-':
            printf("substraction a - b = %d",a-b);
            break;
        case '*':
            printf("multiplication a * b = %d",a*b);
            break;
        case '/':
            printf("divition a / b = %d",a/b);
            break;
        
    
        
    }
    

    return 0;
}