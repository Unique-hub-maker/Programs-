#include<iostream>
using namespace std;

class Distance {
    private:
        int meters;

    public:
        Distance() 
		{
            meters= 0;
        }  

        void displayData()
		 {
            cout<< "Meters value : "<< meters;
        }

        // Friend function declaration
        friend void addValue(Distance &d);
};

// Definition of the friend function
void addValue(Distance &d) {
    d.meters=d.meters+5;
}

int main() {
    Distance d1;  // Declare the object d1 before using it

    // Display the initial value of 'meter'
    d1.displayData();

    // Call the friend function to add 5 to the 'meter'
    addValue(d1);

    // Display the updated value of 'meter' after modification
    d1.displayData();

    return 0;
}
