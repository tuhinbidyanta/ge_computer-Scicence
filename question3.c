#include <stdio.h>
//3. Write a C program to print Fibonacci series up to a user given term using function
// Fibonacci Series using Recursion
int fibonacci_series(int a)
{
	if (a <= 1)
		return a;
	return fibonacci_series(a - 1) + fibonacci_series(a - 2);
}

int main()
{
	int n;
	printf("give me the user define term ");
	scanf("%d",&n);
	printf("the Fibonacci Series %d", fibonacci_series(n));
	
	
	return 0;
}
