#include<iostream>
using namespace std;
float calculatepower(float voltage,float current);
main(){
float voltage,current;
float power;
cout<<"Enter The voltage (in volts) :";
cin>>voltage;
cout<<"Enter The current (in amperes) :";
cin>>current;
power=calculatepower(voltage,current);
cout<<"The Power Is "<<power <<" Watts";
}
float calculatepower(float voltage,float current){
    return voltage*current;
}