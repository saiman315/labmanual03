#include<iostream>
using namespace std;

int calculateweight(int weight, int result);

int main() {
    int weight;
    int result;

    cout << "Enter Your weight in lbs: ";
    cin >> weight;

    calculateweight(weight, result);

    cout << weight << " lbs is = " << result << " kg" << endl;

    return 0;
}

int calculateweight(int weight, int result) {
    result = weight * 0.45;
    return result;
}
