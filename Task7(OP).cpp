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

void printMaze()
{
    cout << "####################################" << endl;
    cout << "#                                  #" << endl;
    cout << "#                                  #" << endl;
    cout << "#                                  #" << endl;
    cout << "#                                  #" << endl;
    cout << "#                                  #" << endl;
    cout << "#                                  #" << endl;
    cout << "#                                  #" << endl;
    cout << "#                                  #" << endl;
    cout << "#                                  #" << endl;
    cout << "#                                  #" << endl;
    cout << "####################################" << endl;
}

void movePlayer(int x, int y)
{
     gotoxy(x,y);
     cout <<"o.o" ;
     Sleep(200);
     gotoxy(x,12);
     cout << "  ";
}

main()
{
    int x=5, y=5;
    while(x<30)
     {
      system("cls");
      printMaze();
      movePlayer(x,y);
      x++;
     }

}
