#include<iostream>
using namespace std;
main()
{
float pound;
float size;
float cost;
float area;
float per,area2;
cout<<"enter size in pound:";
cin>>size;
cout<<"enter cost:";
cin>>cost;
cout<<"arae per square:";
cin>>area;
per=cost/size;
cout<<"cost of fertizer in pound:"<<per<<endl;
area2=cost/area;
cout<<"cost of fertizer per arae:"<<area2;
}