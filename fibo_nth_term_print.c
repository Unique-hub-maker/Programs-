
#include <stdio.h>
int fibo(int);
int main() {
   int n;
   printf("Enter the term :");
   scanf("%d",&n);
printf("nth Fibonacci term is :\n ");
printf("%d",fibo(n));
    return 0;
}
int fibo(int k)
{
    if(k==1 || k==2)
    return 1;
    else return(fibo(k-1)+fibo(k-2));
}