#include<iostream>
#include<cstring>
using namespace std;



class lecture
{
    protected:

    int ID;
    string name;

    public:

void readData() {
        cout << "Enter Name (single word): ";
        cin >> name;  // Reads a single word name
        cout << "Enter ID: ";
        cin >> ID;
}
void printData()
{
    cout<<"Name: "<<name <<endl <<" ID :"<<ID<<endl;

}


};
class partTime:public lecture
{
    protected:
    float payPerHour;
public:
void readData()
{
    
    cout<<"Enter Pay Per Hour:";
    cin>>payPerHour;

}
 void printData()
       {
        
        cout << "Pay per Hour: $" << payPerHour << endl;
    }
};
class FullTime: public lecture
{
    protected:
    float PayPerMonth;

    public:
    
   
   void readData()
   {
      cout<<"Enter Pay Per Month:";
    cin>>PayPerMonth;

   }
  void printData()
       {
        
        cout << "Pay per Month: $" << PayPerMonth << endl;
    }
    
};
int main()
{
    partTime p;
    FullTime f;
     cout << "Enter data for Part-Time Lecturer:" << endl;
    p.lecture::readData();
    p.readData();
    cout << "\nEnter data for Full-Time Lecturer:" << endl;
    f.lecture::readData();
    f.readData();
    
   
    cout<<"Employee Details "<<endl;
    cout << "\nPart-Time Lecturer:" << endl;
    p.lecture::printData();
    p.printData();
    cout << "\nFull-Time Lecturer:" << endl;
    f.lecture::printData();
    f.printData();
    return 0;
}
