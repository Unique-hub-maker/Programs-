#include<iostream>
#include<cstring>
using namespace std;
 void reverseit(char *p);
// main function

int  main()
{
    char str[50];
   cout<<"Enter the String:"<<endl;
   cin>>str;
    reverseit(str);
   return 0;

}
void  reverseit(char *p)
{
    int i,len;
    char ch;
    len= strlen(p);
    for(i=0;i<len/2;i++)
    {
        ch= p[i];
        p[i]=p[len-1-i];
        p[len-1-i]=ch;

    }
    cout<<"The reverse of the string is :"<<p;
}