#include<iostream>
using namespace std;

void decision(int num1,int num2)
{
if(num1==num2)
cout<<"True.";
else
cout<<"False.";
}

main()
{
int num1,num2;
cout << "Enter your first number :" ;
cin >> num1;
cout << "Enter your second number :";
cin >> num2;
decision(num1,num2);
}
