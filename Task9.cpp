#include<iostream>
using namespace std;
void TP_checker(int people,int tp)
{
	int sheets_per_roll = 500;        
	int sheets_per_person_per_day = 57; 
        int quarantine_days = 14;
        int total_sheets = tp * sheets_per_roll;
        int daily_usage = people * sheets_per_person_per_day;
        int tp_last_days = total_sheets / daily_usage;

        if (tp_last_days < quarantine_days) 
       {
          cout << "Your TP will only last " << tp_last_days << " days, buy more!" << endl;
       }
        else
       {
           cout << "Your TP will last " << tp_last_days << " days, no need to panic!" << endl;
       }
}
main()
{
int people,tp;
cout << " Enter the number of people in the household : ";
cin >> people;
cout << " Enter the number of tissue roll papers : ";
cin >> tp;
TP_checker(people,tp);
}
	

