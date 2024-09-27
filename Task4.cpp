#include<iostream>
using namespace std;
void checkSpeed(int speed)
{
if(speed>100)
cout<<"YOU WILL BE CHALLENGED!!!";

if(speed<=100)
cout<<"You are going good.";
}

main()
{
int speed;
cout<<"Enter the speed of the vehicle:";
cin >> speed;
checkSpeed(speed);
}