#include<iostream>
using namespace std;

void pet(int holidays)
{
    int norm = 30000;  
    int workDays = 365 - holidays;  
    int playTimeWorkDay = 63;  
    int playTimeHoliday = 127;  
    
    int totalPlayTime = (workDays*playTimeWorkDay) + (holidays*playTimeHoliday);    
    int difference = norm - totalPlayTime;

    if (difference > 0)
    {
        cout << "Tom can sleep well." << endl;
        cout << "He sleeps " << difference / 60 << " hours and " << difference % 60 << " minutes less than the normal." << endl;
    }
    else 
    {
        cout << "Tom can't sleep well." << endl;
        cout << "He sleeps " << (-difference) / 60 << " hours and " << (-difference) % 60 << " minutes more than the normal." << endl;
    }
}

main()
{
    int holidays;
    cout << "Enter the number of holidays: ";
    cin >> holidays;
    pet(holidays); 
    
}
