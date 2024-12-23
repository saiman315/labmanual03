#include<iostream>
using namespace std;
int claculatetime(int hours);
main(){
int hours;
int result;
cout<<"Enter the number of hours : ";
cin>>hours;
result=claculatetime( hours);
cout<<hours <<" is equivalent to "<<result <<" seconds";

}
int claculatetime(int hours){
    return hours*60*60;
}