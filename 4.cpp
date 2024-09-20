#include<iostream>
using namespace std;
 main(){

 float p;
 float i;
 float c;
 cout<<"Enter Imposter count:";
 cin>> i ;
 cout<<endl;
 cout<<"Enter Player count:";
 cin>> p ;
 cout<<endl;
 c= 100* (i / p);
 cout<<"Chance of being imposter is  "<<c<<"%";

}