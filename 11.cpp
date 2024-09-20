#include<iostream>
using namespace std;
main(){

int age,mov,avg;
cout<<"Enter age: ";
cin>> age;
cout<<"Enter number of times moved: ";
cin>> mov;
avg = age / (mov + 1);
cout<<"Average number of years lived in the same house: "<<avg;

}

