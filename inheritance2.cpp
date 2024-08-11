#include <iostream>
#include <string>
using namespace std;

// Base class for Student
class Student {
protected:
    string name;
    int roll_no;

public:
    void getStudentDetails() {
        cout << "Enter student name: ";
        cin.ignore(); // To clear the input buffer
        getline(cin, name);
        cout << "Enter roll number: ";
        cin >> roll_no;
    }

    void displayStudentDetails() const {
        cout << "Student Name: " << name << endl;
        cout << "Roll Number: " << roll_no << endl;
    }
};

// Base class for Marks
class Marks {
protected:
    float DS, OOP, STAT, MATH, MP;

public:
    void getMarks() {
        cout << "Enter marks for DS: ";
        cin >> DS;
        cout << "Enter marks for OOP: ";
        cin >> OOP;
        cout << "Enter marks for STAT: ";
        cin >> STAT;
        cout << "Enter marks for MATH: ";
        cin >> MATH;
        cout << "Enter marks for MP: ";
        cin >> MP;
    }

    void displayMarks() const {
        cout << "DS: " << DS << endl;
        cout << "OOP: " << OOP << endl;
        cout << "STAT: " << STAT << endl;
        cout << "MATH: " << MATH << endl;
        cout << "MP: " << MP << endl;
    }
};

// Derived class Result inheriting from Marks
class Result : public Marks {
private:
    float total;
    float percentage;

public:
    void calculateResult() {
        total = DS + OOP + STAT + MATH + MP;
        percentage = (total / 500) * 100; // Assuming total marks are out of 500
    }

    void displayResult() const {
        displayMarks(); // Displaying marks
        cout << "Total: " << total << endl;
        cout << "Percentage: " << percentage << "%" << endl;
    }
};

int main() {
    Result studentResult;

    // Input student details
    studentResult.getStudentDetails();

    // Input marks
    studentResult.getMarks();

    // Calculate and display results
    studentResult.calculateResult();
    
    // Display all details
    studentResult.displayStudentDetails();
    studentResult.displayResult();

    return 0;
}
