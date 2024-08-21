#include<iostream>

using namespace std;

class complex
{
    private:
    float real;
    float imag;
    public:
    void input()
    {
        cout<<"Enter the real part";
         cin>>real;
         cout<<"Enter the imaginary part";
         cin>>imag;
    }
    
    void display()
    {
        cout<<"("<<real<<" , "<<imag<<")";

    }
    void addcomplex(complex c1, complex c2)
    {
        real=c1.real+c2.real;
        imag=c1.imag+c2.imag;

    }
};

int main()
{
    complex c1,c2,c3;
    c1.input();
    c2.input();
    c3.addcomplex(c1,c2);
    c1.display();
    cout<<"+";
    c2.display();
    cout<<"=";
    c3.display();
    return 0;



}