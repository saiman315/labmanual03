#include<iostream>
using namespace std;
int calculatepopulation(int population,int birth_rate);
main(){
int population,birth_rate;
cout<<"Enter the World Current Population :";
cin>>population;
cout<<"Enter The Birth rate (per month ) :";
cin>>birth_rate;
int result=calculatepopulation(population,birth_rate);
cout<<"The population In three Decades will be : "<<result;
}
int calculatepopulation(int population,int birth_rate){
    int year=birth_rate*12;
    int dcade=year*30;
    return population+dcade;
}