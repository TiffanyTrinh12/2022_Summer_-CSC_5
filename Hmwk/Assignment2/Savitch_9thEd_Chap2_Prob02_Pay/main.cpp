/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/main.cc to edit this template
 */

/* 
 * File:   main.cpp
 * Author: Tiffany Trinh
 * Created on July 6, 2022, 10:23 PM
 * Purpose: Pay
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
    float preSal;   // Previous Annual Salary
    float newSal;   // New Annual Salary
    float monSal;   // New Monthly Salary
    float retPay;   // Retroactive Pay
    
    //Initialize Variables
    cin >> preSal;
    
    //Map inputs to outputs -> The Process
    newSal = preSal + (0.076 * preSal); // Calculating new annual salary
    monSal = (newSal / 12);             // Calculating new monthly salary
    retPay = (newSal - preSal) / 2;     // Calculating retroactive pay
    
    //Display Results
    cout << "Input previous annual salary." << endl;
    cout << "Retroactive pay    = $" << setw(7) << setprecision(2) << fixed << retPay << endl;
    cout << "New annual salary  = $" << setw(7) << setprecision(2) << fixed << newSal << endl;
    cout << "New monthly salary = $" << setw(7) << setprecision(2) << fixed << monSal;
    
    //Exit stage right

    return 0;
}

