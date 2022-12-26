#include<iostream>
using namespace std;
main()
{
float initialv,finalv,acc;
int time;
cout<<"Enter initial Velocity:";
cin>>initialv;
cout<<"Enter acceleration:";
cin>>acc;
cout<<"Enter time:";
cin>>time;
finalv=(acc*time)+initialv;
cout<<"Final velocity is:"<<finalv;
}
