#include<iostream>
#include<fstream>
using namespace std;
class student
{
    private:
    int roll;
    string name[30];
    char address[50];
    public:
    void read_data();
    void display_data();

}
void student:: read_data();
{
    cout<<"Rollno";
    cin>>roll;
    cout<<"Student Name";
    cin>>name;
    cout<<"Address":
    cin>>address;

}
void student::display_data();
{
    cout<<"roll"<<roll;
    cout<<<<"Name"<<name;
    cout<<"Address"<<address;
}
int main()
{
    student s;
    int i;
    ofstream fout;
    fout.open("Student.dat");
    for(i=0;i<5;i++)
    {
        s.read_data();
        fout.write((char *)&s,sizeof(student));

    }
    fout.close();
    cout<<"Write completed";
 
    return 0;
}
