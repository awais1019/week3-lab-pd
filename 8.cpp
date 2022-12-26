#include<iostream>
using namespace std;
main(){
float vege_price,fruit_price;
int vege_kg, fruit_kg;
cout<<"Enter vegetable price per kilo:";
cin>>vege_price;
cout<<"Enter fruits price per kilo:";
cin>>fruit_price;
cout<<"number of kgs vege:";
cin>>vege_kg;
cout<<"number of kgs fruits:";
cin>>fruit_kg;
float total1,total2,total3,exchange;
total1=vege_price*vege_kg;
total2=fruit_price*fruit_kg;
total3=total1+total2;
exchange=total3/1.94;
cout<<"total Rs of fruit and vegetables:"<<exchange;}
