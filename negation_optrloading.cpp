#include<iostream>
using namespace std;
class check
{
    private:
    int x,y;
    public:
    void getdata()
    {
        cout<<"Enter the Co-ordinates of x and y "<< endl;
        cin>>x>>y;

    }

void display()
{
    cout<<"The negative cordinates of x and y is  " << "(" << x<< "," << y << ")" << endl;

}
check operator -()
{ check t;

    t.x=-x;
    t.y=-y;
    return t;


}

};
int main()
{ check a,b;
    a.getdata();
    b=-a;
    b.display();
    return 0;
    



}