/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/main.cc to edit this template
 */

/* 
 * File:   main.cpp
 * Author: Tiffany Trinh
 * Created on July 6, 2022, 11:27 AM
 * Purpose: Insurance Cost
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants
//Mathematical/Physics/Conversions, Higher dimensioned arrays
const float INS_POL = 0.80f;    // Insurance policy  

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Initialize the Random Number Seed
    
    //Declare Variables
    int repCst; // Replacement cost of building
    int minIns; // Minimum insurance cost for building
    
    //Initialize Variables
    cin >> repCst;  // Obtain replacement cost
    
    //Map inputs to outputs -> The Process
    minIns = repCst * INS_POL;  // Calculate minimum insurance cost
    
    //Display Results
    cout << "Insurance Calculator" << endl;
    cout << "How much is your house worth?" << endl;
    cout << "You need $" << minIns << " of insurance.";
    
    //Exit stage right

    return 0;
}

