#include<iostream>
using namespace std;
int calculatearea(int length,int width);
int main() {
int length,width;
int area;
cout<<"Enter Length Of Rectangle :";
cin>>length;
cout<<"Enter The Width Of REctangle :";
cin>>width;
area=calculatearea(length,width);
cout<<"The Area Of rectangle is:"<<area;
}

int calculatearea(int length,int width){
    return length * width;
}
