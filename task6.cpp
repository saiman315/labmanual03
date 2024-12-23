#include<iostream>
using namespace std;
float claculatebits(float megabyte);
int main() {
float megabyte;
float result;
cout<<"Enter The Megabytes : ";
cin>>megabyte;
result=claculatebits(megabyte);
cout<<megabyte <<"Is equal to " <<result <<" bits";
}
 float claculatebits(float megabyte){
   return megabyte*1024*8; 
 }