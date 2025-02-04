
#include <stdio.h>

int main() {
   int n,a=0,b=1,c;
   printf("Enter the number of terms :");
   scanf("%d",&n);
   printf("fibonacci series are :");
   printf("\n%d\n%d\n",a,b);
   for(int i=0;i<n-2;i++)
   {
       c=a+b;
       printf("%d\n",c);
       a=b;
       b=c;
   }

    return 0;
}