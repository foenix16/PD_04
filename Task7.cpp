#include<iostream>
using namespace std;
void flowerShop(int redRose, int whiteRose, int tulip)
{
double price_red_rose,price_white_rose,price_tulip;
double originalPrice,discountedPrice,price;
price_red_rose=redRose*2;
price_white_rose=whiteRose*4.10;
price_tulip=tulip*2.50;
originalPrice=price_red_rose+price_white_rose+price_tulip;
cout<<"The price of flowers is : $"<< originalPrice <<endl;

if(originalPrice >= 200)
{
price=originalPrice*0.2;
discountedPrice=originalPrice-price;
cout << "The discounted price is :" << discountedPrice;
}

}

main()
{
int redRose,whiteRose,tulip;
cout<<"Enter number of Red Roses : " ;
cin>> redRose;
cout<<"Enter number of White Roses :" ;
cin>>whiteRose;
cout<<"Enter number of Tulips:";
cin>>tulip;
flowerShop(redRose,whiteRose,tulip);
}
