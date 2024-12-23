#include<iostream>
using namespace std;
int calcultepoints(int win,int lose, int draw);
main(){
int win,draw,lose;
string name;
cout<<"Enter The Name Of cricket Team :";
cin>>name;
cout<<"Enter the number of Wins :";
cin>>win;
cout<<"Enter The Number of loses :";
cin>>lose;
cout<<"Enter The Number of draws :";
cin>>draw;
int point=calcultepoints(win,lose,draw);
cout<<name <<" Has Obtained " <<point <<" Points In Asia Cup tournament";

}
int calcultepoints(int win,int lose, int draw){
    int result1=win*3;
    int result2=lose*0;
    int result3=draw*1;
    return result1 + result2 + result3;
}