#include<iostream>
using namespace std;
void discount(string country_name,double price)
{
double discount;
if(country_name =="Pakistan" || country_name=="pakistan")
{
discount=price*0.05;
price=price-discount;
cout<<price;
}

if(country_name =="India" || country_name=="india")
{
discount=price*0.20;
price=price-discount;
cout<<price;
}
if(country_name =="Canada" || country_name=="canada")
{
discount=price*0.45;
price=price-discount;
cout<<price;
}

if(country_name =="England" || country_name=="england")
{
discount=price*0.30;
price=price-discount;
cout<<price;
}

if(country_name =="Ireland" || country_name=="ireland")
{
discount=price*0.10;
price=price-discount;
cout<<price;
}
}

main()
{
string country_name;
double price;
cout<<"Enter your country name[Pakistan,Ireland,India,England,Canada] :";
cin>>country_name;
cout<<"Enter your ticket price:";
cin>>price;
discount(country_name,price);
}