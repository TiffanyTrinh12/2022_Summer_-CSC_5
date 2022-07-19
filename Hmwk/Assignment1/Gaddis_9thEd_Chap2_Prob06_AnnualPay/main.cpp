/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/main.cc to edit this template
 */

/* 
 * File:   main.cpp
 * Author: Tiffany Trinh
 * Created on June 28, 2022, 11:09 PM
 * Purpose: Calculate Annual Pay 
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants
//Mathematical/Physics/Conversions, Higher dimensioned arrays

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Initialize the Random Number Seed
    
    //Declare Variables
    float payAmt,   // Amount earned per pay period
          payPrd,   // Number of times employee is paid per year
          annlPay;  // Total annual pay
    
    //Initialize Variables
    payAmt = 2200.0f;    // Earns $2200 per pay period
    payPrd = 26.0f;      // Employee is paid 26 times per year
    
    //Map inputs to outputs -> The Process
    annlPay = payAmt * payPrd; // Calculating annual pay
    
    //Display Results
    cout << "Total Annual Pay = $" << annlPay << "." << endl;
    
    //Exit stage right

    return 0;
}

