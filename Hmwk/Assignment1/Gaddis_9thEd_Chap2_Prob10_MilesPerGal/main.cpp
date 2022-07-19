/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/main.cc to edit this template
 */

/* 
 * File:   main.cpp
 * Author: Tiffany Trinh
 * Created on June 29, 2022, 11:10 AM
 * Purpose: Calculating Miles Per Gallon
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
    int galGas, // Gallons of Gas used
        miDrv,  // Miles driven
        mPg;    // Miles per Gallon
    
    //Initialize Variables
    galGas = 15;    // 15 gallons of gas
    miDrv = 375;    // 375 miles driven
    
    //Map inputs to outputs -> The Process
    mPg = miDrv / galGas;   // Calculate miles per gallon
    
    //Display Results
    cout << "The number of miles per gallon the car gets is " << mPg << "." << endl;
    
    //Exit stage right

    return 0;
}

