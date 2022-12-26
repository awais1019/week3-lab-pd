#include<iostream>
using namespace std;
main()
{
float mark1,mark2,mark3,mark4,mark5,total;
string name;
float percentage;
cout<<"Enter your name:";
cin>>name;
cout<<"Enter your first subject marks:";
cin>>mark1;
cout<<"Enter your Second subject marks:";
cin>>mark2;
cout<<"Enter your third subject marks:";
cin>>mark3;
cout<<"Enter your fourth subject marks:";
cin>>mark4;
cout<<"Enter your five subject marks:";
cin>>mark5;
total=mark1+mark2+mark3+mark4+mark5;
percentage=(total/500)*100;
cout<<"your percentage is:"<<percentage;












}