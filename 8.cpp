#include<iostream>
using namespace std;
main(){

float vppkg,fppkg,ern;
int total_kg_v,total_kg_f;
cout<<"Enter vegetable price per kilogram: ";
cin>> vppkg;
cout<<endl;
cout<<"Enter fruit price per kilogram: ";
cin>> fppkg;
cout<<endl;
cout<<"Enter total kilograms of vegetables: ";
cin>> total_kg_v;
cout<<endl;
cout<<"Enter total kilograms of fruits: ";
cin>> total_kg_f;
cout<<endl;
ern = vppkg * total_kg_v + fppkg * total_kg_f;
cout<<"Total earning in Rupees (Rps): "<<ern;



}