#include <iostream>
using namespace std;


void printMenu() 
{
    cout << "===========================================" << endl;
    cout << "    University Admission Management System  " << endl;
    cout << "===========================================" << endl;
    cout << "1. Calculate Aggregate" << endl;
    cout << "2. Compare ECAT Marks" << endl;
    cout << "3. Exit" << endl;
}


void calculateAggregate(string name, float matricMarks, float interMarks, float ecatMarks) 
{
    float totalMatric = 1100;
    float totalInter = 550;
    float totalEcat = 400;

    float matricWeightage = (matricMarks / totalMatric) * 30;
    float interWeightage = (interMarks / totalInter) * 30;
    float ecatWeightage = (ecatMarks / totalEcat) * 40;

    float aggregate = matricWeightage + interWeightage + ecatWeightage;

    cout << "Aggregate for " << name << " is: " << aggregate << "%" << endl;
}

void compareMarks(string nameStd1, float ecatMarksStd1, string nameStd2, float ecatMarksStd2) 
{
    if (ecatMarksStd1 > ecatMarksStd2) 
    {
        cout << nameStd1 << " will be assigned the first roll number." << endl;
    } 
    else if (ecatMarksStd1 < ecatMarksStd2) 
    {
        cout << nameStd2 << " will be assigned the first roll number." << endl;
    } else 
    {
        cout << "Both students have equal ECAT marks." << endl;
    }
}

main() 
{
    int choice;
    string name1, name2;
    float matricMarks, interMarks, ecatMarks1, ecatMarks2;

    while (true) 
       {
        printMenu();
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 1) 
        {
            
            cout << "Enter your name: ";
            cin >> name1;
            cout << "Enter your Matric marks (out of 1100): ";
            cin >> matricMarks;
            cout << "Enter your Intermediate marks (out of 550): ";
            cin >> interMarks;
            cout << "Enter your ECAT marks (out of 400): ";
            cin >> ecatMarks1;
            
            calculateAggregate(name1, matricMarks, interMarks, ecatMarks1);
        } 
        else if (choice == 2) 
        {
            
            cout << "Enter the name of first student: ";
            cin >> name1;
            cout << "Enter ECAT marks of " << name1 << " (out of 400): ";
            cin >> ecatMarks1;

            cout << "Enter the name of second student: ";
            cin >> name2;
            cout << "Enter ECAT marks of " << name2 << " (out of 400): ";
            cin >> ecatMarks2;

            compareMarks(name1, ecatMarks1, name2, ecatMarks2);
        } 
        else if (choice == 3) 
        {
            
            cout << "Exiting the program." << endl;
            break;
        } 
        else 
        {
            cout << "Invalid choice. Please try again." << endl;
        }
    }
}