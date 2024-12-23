#include<iostream>
using namespace std;

float claculateaggregate(string name, int marks_m, int marks_e, int marks_i);

int main() {
    string name;
    float aggregate;
    int marks_m, marks_e, marks_i;
    cout << "Enter Your Name: ";
    cin >> name;
    cout << "Enter Your marks (out of 1100): ";
    cin >> marks_m;
    cout << "Enter Your Intermediate marks (out of 1100): ";
    cin >> marks_i;
    cout << "Enter Your Ecat Marks (out of 400): ";
    cin >> marks_e;
    aggregate = claculateaggregate(name, marks_m, marks_e, marks_i);
    cout << "Student Name: " << name << endl;
    cout << "Your Aggregate is: " << aggregate << "%" << endl;
}

float claculateaggregate(string name, int marks_m, int marks_e, int marks_i) {
    float result1 = (((marks_m / 1100.0) * 100) * (10.0 / 100.0));
    float result2 = (((marks_i / 550.0) * 100) * (40.0 / 100.0));
    float result3 = (((marks_e / 400.0) * 100) * (50.0 / 100.0));
    return result1 + result2 + result3;
}
