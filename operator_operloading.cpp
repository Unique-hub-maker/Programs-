#include<iostream>
using namespace std;
class demo
{
    private:
    int a,b,c;
    public:
    demo(int a1,int b1,int c1)
    {
        a=a1;
        b=b1;
        c=c1;

    }
 void display()
 {
    cout<<"a="<<a;
     cout<<"b="<<b;
      cout<<"b="<<c;
 }
   
void operator++()
{
    a++;
    b++;
    c++;
}
};
int main()
{
    demo ob1(10,20,30);
    ++ob1;   //ob1.operator++();
    ob1.display();
    return 0;
}