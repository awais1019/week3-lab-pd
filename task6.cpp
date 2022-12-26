#include<iostream>
using namespace std;
main()
{
string name;
float matricNumber;
float interNumber;
float ecatNumber;
float mpercentage;
float ipercentage;
float epercentage;
float weightagem;
float weightagei;
float weightagee;
float totalweightage;
cout<<"Enter your Name:";
cin>>name;
cout<<"Enter matric number:";
cin>>matricNumber;
cout<<"Enter inter number";
cin>>interNumber;
cout<<"Enter your ecat number";
cin>>ecatNumber;
mpercentage=matricNumber/1100*100;
weightagem=mpercentage*10/100;
ipercentage=interNumber/510*100;
weightagei=ipercentage*40/100;
epercentage=ecatNumber/400*100;
weightagee=epercentage*50/100;
totalweightage=weightagem+weightagei+weightagee;
cout<<"your aggregate is:"<<totalweightage;
}
