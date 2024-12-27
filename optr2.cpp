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
complex operator +(complex c)
{
    complex temp;
    temp.real=real+c.real;
    temp.imag=imag+c.imag;
return (temp);
}
void display()
{
    cout<< real <<"+ i"<< imag <<endl;
}

};
int main()
{
    complex c1(2,5);
    complex c2(8,3);
    complex c3(4,6);
    complex c4;

    c4= c1+c2+c3;
    
    c4.display();
    return 0;

}