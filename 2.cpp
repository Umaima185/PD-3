#include<iostream>
using namespace std;
 main(){

 int m;
 int fps;
 float nof;
 cout<<"Enter minutes:";
 cin>> m ;
 cout<<endl;
 cout<<"Enter frames per second:";
 cin>> fps ;
 cout<<endl;
 nof = m * 60 *fps;
 cout<<"Number of frames is  "<<nof;

}