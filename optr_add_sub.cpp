#include<iostream>
using namespace std;

class complex
{
    private:
    float real;
    float imag;
    public:
    complex()  //Default Constructor 
    {
        real= 0;
        imag= 0;

    }
complex (float r,float i)
{
    real=r;
    imag=i;
}
complex operator +(complex & c)
{
    complex temp;
    temp.real=real+c.real;
    temp.imag=imag+c.imag;
return (temp);
}
complex operator -(complex & c)
{
    complex temp;
    temp.real=real-c.real;
    temp.imag=imag-c.imag;
return (temp);
}
void add_display()
{
  
    cout<<"("<< real<<")"<<"+"<< "("<<imag<<")"  <<"i"<< endl;
}
void sub_display()
{
    cout<<"("<< real<<")"<<"+"<< "("<<imag<<")"  <<"i"<< endl;
}

};
int main()
{
    complex c1(2,5);
    complex c2(8,3);
    complex c3,c4;

    c3 =c1+c2;

    c4 =c2-c1;
    c3.add_display();
    c4.sub_display();
    return 0;

}