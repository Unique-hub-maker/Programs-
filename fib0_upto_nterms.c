
#include <stdio.h>
int fibonacci(int);
int main()
 { 
   int n,fibo,i;
   printf("Enter the number of terms :");
   scanf("%d",&n);
for(i=0;i<n;i++)
{
    fibo=fibonacci(i);
    printf("%d",fibo);
    
}

    return 0;
}
int fibonacci(int n)
{
    if(n==0 || n==1)
    return n;
    else return(fibonacci(n-1)+fibonacci(n-2));
}