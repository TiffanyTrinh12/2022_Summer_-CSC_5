/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/main.cc to edit this template
 */

/* 
 * File:   main.cpp
 * Author: Tiffany Trinh
 * Created on July 10, 2022, 8:09 PM
 * Purpose:  ISP
 */

//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants
//Mathematical/Physics/Conversions, Higher dimensioned arrays

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Initialize the Random Number Seed
    
    //Declare Variables
    char pkg;
    float mnthFee, numHrs, addHrs, bill;
    
    //Initialize Variables
    cout << "Which package did you purchase? How many hours did you use? ";
    cin >> pkg >> numHrs;
    
    //Map inputs to outputs -> The Process
    if (!(pkg == 'A' || pkg == 'B' || pkg == 'C'))
    {
        cout << "You can only select Packages A, B, or C." << endl;
    }
    else
    {
        if (numHrs > 744)
        {
            cout << "Invalid number of hours entered.";
        }
        else
        {
            if (pkg == 'A')
            {
                if (numHrs <= 10)
                {
                    bill = 9.95f;
                }
                else
                {
                    addHrs = numHrs - 10;
                    bill = 9.95 + (2.0 * addHrs);
                }
            }
            else if (pkg == 'B')
            {
                if (numHrs <= 20)
                {
                    bill = 14.95f;
                }
                else
                {
                    addHrs = numHrs - 20;
                    bill = 14.95 + (1.0 * addHrs);
                }
            }
            else if (pkg == 'C')
            {
                bill = 19.95f;
            }
        
            cout << "ISP Bill" << endl;
            cout << "Input Package and Hours" << endl;
            cout << "Bill = $" << setw(6) << setprecision(2) << fixed << bill;
            }  
    }
    
    //Display Results
    
    
    //Exit stage right

    return 0;
}

