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

void printBigH()
{
    cout << " *      *" <<endl;
    cout << " *      *" <<endl;
    cout << " ********" <<endl;
    cout << " *      *" <<endl;
    cout << " *      *" <<endl;
} 

void printBigU() 
{
    cout << " *      *\n";
    cout << " *      *\n";
    cout << " *      *\n";
    cout << " *      *\n";
    cout << "  ******\n";
}

void printBigM() 
{
    cout << " **    **\n";
    cout << " * *  * *\n";
    cout << " *  **  *\n";
    cout << " *      *\n";
    cout << " *      *\n";
}

void printBigA()
{  
    cout << "   *   \n";
    cout << "  * *  \n";
    cout << " ***** \n";
    cout << " *   * \n";
    cout << " *   * \n";
}

void printBigR()
{
    cout << "*****  "<<endl;
    cout << "*   ** "<<endl;
    cout << "* ** "<<endl;
    cout << "*   **" <<endl;
    cout << "*    *" <<endl;
}

void printBigS()
{
    cout << "  *** " <<endl;
    cout << " **  **"<<endl;
    cout << "  *** " << endl;
    cout << " **  **" <<endl;
    cout << "   **" << endl;
}

void printBigN()
{
   cout << "*       *" << endl;
   cout << "* *     *" << endl;
   cout << "*   *   *" << endl;
   cout << "*     * *" << endl;
   cout << "*       *" << endl;
}
main() 
{
    system("cls");
    cout << "  " <<endl;
    printBigH(); 
    cout << "  " <<endl;

    printBigA();
    cout << "  " <<endl;

    printBigS();
    cout << "  " <<endl;

    printBigS();
    cout << "  " <<endl;

    printBigA();
    cout << "  " <<endl;
    printBigN();
}
