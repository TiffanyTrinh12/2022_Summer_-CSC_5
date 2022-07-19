/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/main.cc to edit this template
 */

/* 
 * File:   main.cpp
 * Author: Tiffany Trinh
 * Created on June 29, 2022, 12:05 PM
 * Purpose: Calculate Sum
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
    int num1,   // Hold first value
        num2,   // Hold second value
        total;  // Sum
    
    //Initialize Variables
    num1 = 50;  // First value is 50
    num2 = 100; // Second value is 100
    
    //Map inputs to outputs -> The Process
    total = num1 + num2;    // Calculate sum of 50 and 100
    
    //Display Results
    cout << "The sum of 50 and 100 is " << total << "." << endl;
    
    //Exit stage right

    return 0;
}

