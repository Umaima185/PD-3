#include<iostream>
using namespace std;
 main(){

 string name;
 int tgt;
 int loss;
 cout<<"Enter name:";
 cin>> name ;
 cout<<endl;
 cout<<"Enter target weight:";
 cin>> tgt ;
 cout<<endl;
 loss = 15 * tgt;
 cout<<name<<" will lose "<<tgt<<"weight in "<<loss<<" days";

}