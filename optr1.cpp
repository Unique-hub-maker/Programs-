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
complex(float r,float i)
{
    real=r;
    imag=i;
}
complex(complex &c)
{
    real=c.real;
    imag=c.imag;

}
void display()
{
    cout<<real<<"+ i"<<imag<<endl;
}

};
int main()
{
    complex c1;
    complex c2(1.2,3);
    complex c3(c2);
    c1.display();
    c2.display();
    c3.display();
    return 0;

}