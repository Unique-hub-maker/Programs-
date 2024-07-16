#include<iostream>
using namespace std;
// namespace examples 
namespace butwal
{
    char name[20];
    int ctzn;


void showdetails()
{
    cout<<"The details of the person from Butwal is "<<endl;
    cout<<butwal::name<<butwal::ctzn<<endl;

}
}
namespace ktm
{
      char name[20];
    int ctzn;

void showdetails()
{
    cout<<"The details of the person from Butwal is "<<endl;
    cout<<ktm::name<<ktm::ctzn<<endl;

}
}
int main{

    cout<<"Enter the details of the persom from Butwal is "<<endl;
    cin>>butwal::name>>butwal::ctzn;
     cout<<"Enter the details of the persom from ktm is "<<endl;
    cin>>ktm::name>>ktm::ctzn;
    return 0;
    
}