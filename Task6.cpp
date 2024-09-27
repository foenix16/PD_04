#include <iostream>
using namespace std;

void longestTime(int hours, int mins,int hours_in_mins) 
{
hours_in_mins=hours*60;
if(hours_in_mins>mins)
{
cout << hours ;
}
else
{
cout<<mins;
}

}
main() 
{
    int hours,mins,hours_in_mins;
    cout << "Enter the number of hours: ";
    cin >> hours; 
    cout << "Enter the number of minutes: ";
    cin >> mins;
    longestTime(hours,mins,hours_in_mins);  
}
