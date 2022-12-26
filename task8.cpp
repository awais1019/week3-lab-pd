#include <iostream>
using namespace std;

main(){
int int_1,reminder_2,reminder_3,reminder_4,sum;
cout<<"enter the  Four digit number   ";
cin>>int_1;
reminder_2= int_1%10;
int_1=int_1/10;
reminder_3=int_1%10;
int_1=int_1/10;
reminder_4=int_1%10;
int_1=int_1/10;
sum =int_1+reminder_2+reminder_3+reminder_4 ;
cout<<"sum  is : "<<sum;

}
