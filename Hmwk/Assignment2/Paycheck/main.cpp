/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/main.cc to edit this template
 */

/* 
 * File:   main.cpp
 * Author: Tiffany Trinh
 * Created on July 6, 2022, 4:30 PM
 * Purpose: Calculate Paycheck
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
    float pRate, hrsWrkd, grsPay;
    
    //Initialize Variables
    cin >> pRate;
    cin >> hrsWrkd;
    
    //Map inputs to outputs -> The Process
    if (hrsWrkd <= 40)
        grsPay = pRate * hrsWrkd;
    else
        grsPay = (pRate * hrsWrkd) + (pRate * (hrsWrkd - 40));
    
    //Display Results
    cout << "This program calculates the gross paycheck." << endl;
    cout << "Input the pay rate in $'s/hr and the number of hours." << endl;
    cout << "Paycheck = $" << setw(7) << setprecision(2) << fixed << grsPay;
    
    //Exit stage right

    return 0;
}

