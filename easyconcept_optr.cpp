#include<iostream>
using namespace std;
class box
{
    private:
     int a,b;
     public:
     void getdata(int x,int y)
     {
        a=x;
        b=y;

     }
     box operator +(box z)
     { box temp;
       temp.a= z.a+a;
        temp.b=z.b+b;
return temp;

     }
void display()
{
    cout<<a<<endl<<b;

}
};
int main()
{
    box m,n,o;
    m.getdata(1,2);
    n.getdata(4,6);
    o=m+n;
    o.display();
    return 0;

}