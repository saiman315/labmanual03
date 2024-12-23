#include<iostream>
using namespace std;
int calculateage(int age);
main(){
int age;
cout<<"Enter Your Age In years :";
cin>>age;
int result =calculateage(age);
cout<<"Your age in days is approximately :"<<result <<" days";
}

int calculateage(int age){
    return age*365;
}