#include<iostream>
#include<windows.h>
using namespace std;

void gotoxy(int x, int y) 
{
    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

main()
{
system("cls");
gotoxy(50,35);
cout<< "UMAR" ;
}