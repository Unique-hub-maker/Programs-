// Online C compiler to run C program online
#include <stdio.h>
int fibo(int first_term, int second_term, int n);

int main() {
    int n,first_term=5,second_term=8;
    printf("Enter the term you want: ");
    scanf("%d",&n);
    
    int result = fibo(first_term, second_term, n);
    printf("The %dth term of the Fibonacci sequence is: %d\n", n,result);
    return 0;
}
int fibo(int first_term, int second_term, int n)
{
      if(n==1)
    return first_term;
    else if(n==2)
    return second_term;
    
    else return(fibo(first_term, second_term, n - 1)+fibo(first_term, second_term, n-2));
}