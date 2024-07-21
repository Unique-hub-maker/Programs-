#include<iostream>
using namespace std;
int main()
    {
        int checking_num,dividing_num;
        cout<<"Enter the number you want to check:"<<endl;
        cin>>checking_num;
        for(dividing_num=2;dividing_num<checking_num;dividing_num++)
        {
            if(checking_num%dividing_num==0)
       break;
        
        }
        if(checking_num==dividing_num)
        cout<<checking_num<<"is a prime number "<<endl;
        else
        cout<<checking_num<<"is a composite number "<<endl;
        return 0;
    }
