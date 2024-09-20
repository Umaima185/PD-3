#include<iostream>
using namespace std;
 main(){

 int s;
 int c;
 float area;
 float fpp;
 float fps;
 cout<<"Enter size of bag in pounds:";
 cin>> s ;
 cout<<endl;
 cout<<"Enter cost of bag:";
 cin>> c ;
 cout<<endl;
 cout<<"Enter area to be covered:";
 cin>> area ;
 cout<<endl;
 fpp = c / s;
 fps = c / area;
 cout<<"Cost of fertilizer per pound :$"<<fpp<<endl;
 cout<<"Cost of fertilizer per square foot :$"<<fps;

}