/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/main.cc to edit this template
 */

/* 
 * File:   main.cpp
 * Author: Tiffany Trinh
 * Created on July 10, 4:30 PM
 * Purpose: Bank Charges
 */

//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants
//Mathematical/Physics/Conversions, Higher dimensioned arrays
const float mnthFee = 10.0f;

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Initialize the Random Number Seed
    
    //Declare Variables
    float begBal, chkFee, lowBal, newBal;
    short nChecks;
    
    
    //Initialize Variables
    cout << "What is your current balance? How many checks have you written? ";
    cin >> begBal >> nChecks;
    
    //Map inputs to outputs -> The Process
    if (begBal < 0)
    {
        cout << "Urgent Message: Your account is overdrawn." << endl;   
    }
    else 
    {
        if (begBal >= 0 && begBal < 400)
        {
            lowBal = 15.0f;
        }
        else
        {
            lowBal = 0;
        }
        if (nChecks < 0)
        {
            cout << "Invalid number of checks written." << endl;
        }
        else
        {
            if ((nChecks == 0) && (nChecks < 20))
            {
                chkFee = nChecks * 0.10;
            }
            else if ((nChecks > 19) && (nChecks < 40))
            {
                chkFee = nChecks * 0.08;
            }
            else if ((nChecks > 39) && (nChecks < 60))
            {
                chkFee = nChecks * 0.06;
            }
            else
            {
                chkFee = nChecks * 0.04;
            }
        
            newBal = begBal - (chkFee + mnthFee + lowBal);
        
            cout << "Monthly Bank Fees" << endl;
            cout << "Input Current Bank Balance and Number of Checks" << endl;
            cout << setprecision(2) << fixed;
            cout << "Balance     $" << setw(9) << begBal << endl;
            cout << "Check Fee   $" << setw(9) << chkFee << endl;
            cout << "Monthly Fee $" << setw(9) << mnthFee << endl;
            cout << "Low Balance $" << setw(9) << lowBal << endl;
            cout << "New Balance $" << setw(9) << newBal;
        }
    }
    

    //Display Results
    
    
    //Exit stage right

    return 0;
}

