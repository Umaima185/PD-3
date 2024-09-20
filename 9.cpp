#include<iostream>
using namespace std;
main(){

int num,sum;
cout<<"Enter a number: ";
cin>> num;
cout<<endl;
sum = (num % 10) + ((num / 10)) % 10 + ((num / 100) % 10) + ((num / 1000) % 10);
cout<<"The sum of digits is: "<<sum;

}