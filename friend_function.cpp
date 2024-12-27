#include<iostream>
using namespace std;

class Addition {
    private:
        int a,b;
    public:
        Addition(int a1,int b1) 
        {
            a=a1;
            b=b1;
        }

       

        // Friend function declaration
        friend int addNo(Addition &k);
};

// Definition of the friend function
int addNo(Addition &k) {
 return(k.a+k.b);

}

int main() {
Addition ob1(10,12);
     // Call the friend function 
   int s = addNo(ob1);
   cout<<"Addition is :"<<s;
   
   
 return 0;

   
}
