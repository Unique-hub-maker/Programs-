#include<iostream>
using namespace std;

class height
{
  private:
  int meter;
  int centimeter;

  public:

  height()
  {
    meter=0;
    centimeter=0;

  }
  height(int m,int cm)
  {
    meter=m;
    centimeter=cm;

  }
  friend height operator +(height &h1, height &h2);
  void displayheight()
  {
    cout<<meter<<"m"<<centimeter<<"cm"<<endl;

  }
  
};
height operator +(height &h1, height &h2)
{
    height temp;
    temp.meter=h1.meter+h2.meter;
    temp.centimeter=h1.centimeter+h2.centimeter;
    return temp;
}
int main()
{
        cout<<"height 1:";
    height h1(2,4);
h1.displayheight();
    
     cout<<"height 2:";
    height h2(5,6);
    h2.displayheight();
    cout<<"The total height after addition is :";
    height h3 = h1+h2;
    h3.displayheight();
    return 0;
}