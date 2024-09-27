#include<iostream>
using namespace std;
void reverse(string num)
{
if(num=="true" || num=="True")
cout<<"false";

if(num=="false"|| num=="False")
cout<<"true";
}

main()
{
string num;
cout<<"Enter either true or false:";
cin>> num;
reverse(num);
}