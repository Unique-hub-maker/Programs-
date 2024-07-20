 #include <iostream>
#include <cstring>
using namespace std;

struct student
{
    char name[20];
    int roll;
    float marks;
};

int main()
{
    int n;
    cout<<"Enter the number of the students: "<<endl;
    cin>>n;

    struct student st1[n]; 

    for (int i=0;i<n;i++)
    {
        cout<<"Enter the name of student"<<i+1<<endl;
        cin>>st1[i].name;   //scanf("%s", st1[i].name);
        cout<<"Enter roll no. of student "<<i+1<<endl;
        cin>>st1[i].roll;//scanf("%d", &st1[i].roll);
        cout<<"Enter marks of student "<<i+1<<endl;
        cin>>st1[i].marks;//scanf("%f", &st1[i].marks);
    }

    cout<<"Student details:"<<endl;
    for (int i=0;i<n;i++)
    {
        cout<<"Student"<<i+1<<endl;
        cout<<"Name :"<<st1[i].name<<endl;
        cout<<"Roll no.:"<<st1[i].roll<<endl;
        cout<<"Marks:"<< st1[i].marks<<endl;
    }

    return 0;
}

