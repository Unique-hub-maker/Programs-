#include<stdio.h>
int factorial(int);
int main()
{
	int n,f;
	printf("Enter n:\n");
	scanf("%d",&n);
	f=factorial(n);
	printf("The factorial of %d is %d",n,f);
	return 0;
}     /* end of the program */
       // sub program user defined functions 
int factorial(int n)
{    
   
	if(n==0)
	return 1;
   else
	return(factorial(n-1)*n);
}