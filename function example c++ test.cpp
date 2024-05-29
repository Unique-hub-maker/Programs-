#include<iostream>
using namespace std;
void add(int a,int b)
{
	cout<<"Sum is ="<<a+b<<endl;
}
void sub(int a,int b)
{
		cout<<"Sub is ="<<a-b<<endl;
} 
void mul(int a,int b)
{
	cout<<"Multiply is ="<<a*b<<endl;
}
void div(float a,float b)
{
		cout<<"Division is ="<<a/b<<endl;
}
int main()
{
	int x,y;
	cout<<"Enter first number"<<endl;
	cin>>x;	
	cout<<"Enter second number"<<endl;
	cin>>y;	
	add(x,y);
	sub(x,y);
	mul(x,y);
	div(x,y);
	return 0;
}
