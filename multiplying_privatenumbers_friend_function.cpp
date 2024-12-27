#include <iostream>
using namespace std;

class B; // Forward declaration of class B for use in the friend function

class A {
private:
    int numA;

public:
    void getdata_A(int a) {
        numA = a;
    }
    friend int multiply(A, B); // Friend function declaration
};

class B {
private:
    int numB;

public:
    void getdata_B(int b) {
        numB = b;
    }
    friend int multiply(A, B); // Friend function declaration
};

// Friend function to multiply private members of A and B
int multiply(A a, B b) {
    return a.numA * b.numB;
}

int main() {
    A obj1;
    B obj2;
    obj1.getdata_A(2);
    obj2.getdata_B(3);
    cout << "The product of numA and numB is: " << multiply(obj1, obj2) << endl;
    return 0;
}
