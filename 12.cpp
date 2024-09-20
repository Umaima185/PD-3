#include<iostream>
using namespace std;	
main(){

int mts,wd,ht,walls;
cout<<"Number of square meters you can paint: ";
cin>> mts;
cout<<"Width of the single wall(in meters): ";
cin>> wd;
cout<<"Height of the single wall(in meters): ";
cin>> ht;
walls = mts / (wd*ht);
cout<<"Number of walls you can paint: "<<walls;


}