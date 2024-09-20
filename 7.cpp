#include<iostream>
using namespace std;
 main(){
 string name;
 int ats,cts,fa,ch,net,ct,at;
 cout<<"Enter movie name:";
 cin>> name;
 cout<<"Enter adult ticket price: $";
 cin>> at;
 cout<<"Enter child ticket price: $";
 cin>> ct;
 cout<<"Enter adult ticket sold:";
 cin>> ats;
 cout<<"Enter child ticket sold:";
 cin>> cts;
 net = ats * at + ct * cts;
 ch = net / 10;
 fa = net - ch;
 cout<<"Movie: "<<name<<endl;
 cout<<"Total amount after ticket sales: $"<<net<<endl;
 cout<<"Charity donated (10%): $"<<ch<<endl;
 cout<<"Remaining amount after donation: $"<<fa;

}