#include<iostream>
using namespace std;
 main(){

 float vi;
 float t;
 float a;
 float vf;
 cout<<"Enter initial velocity:";
 cin>> vi ;
 cout<<endl;
 cout<<"Enter time:";
 cin>> t ;
 cout<<endl;
 cout<<"Enter acceleration:";
 cin>> a ;
 cout<<endl;
 vf= vi + a * t;
 cout<<"final velocity is  "<<vf<<"ms^-1";

}