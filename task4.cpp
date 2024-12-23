#include<iostream>
using namespace std;
float calculatecurrent(float charge,float time);
int main() {
float charge, time , current;
cout<<"Enter The Charge(Q) :";
cin>>charge;
cout<<"Enter The Time : ";
cin>>time;
current=calculatecurrent(charge,time);
cout<<"The Current(I) is :"<<current <<"Amperes";
}
float calculatecurrent(float charge,float time){
    return charge/time;
}