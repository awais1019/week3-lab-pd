#include<iostream>
using namespace std;
main(){
string name;
int childticketprice,adultticketprice,childsoldnum,adultsoldnum;
float percentage;
int total1,total2;
int total3;float afterdonation,afterdonations;
cout<<"ENTER NAME:";
cin>>name;
cout<<"Enter child ticket price:";
cin>>childticketprice;
cout<<"Enter adult ticket price:";
cin>>adultticketprice;
cout<<"Enter number of adult solds tickets:";
cin>>adultsoldnum;
cout<<"Enter number of child solds tickets:";
cin>>childsoldnum;


total1= childticketprice * childsoldnum;
total2= adultticketprice * adultsoldnum;
total3= (total1 + total2);
cout<<"Enter percentage to donate:";
cin>>percentage;

cout<<"Total Amount Generated:"<<total3<<endl;
afterdonations=(total3)*(percentage*0.01);
afterdonation=total3-afterdonations;
cout<<"Total amount generated after donation:"<<afterdonation;
}
