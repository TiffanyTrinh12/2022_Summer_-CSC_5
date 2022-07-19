/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/main.cc to edit this template
 */

/* 
 * File:   main.cpp
 * Author: Tiffany Trinh
 * Created on June 28, 2022, 10:58 PM
 * Purpose: Calculate Average
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
    float num1,     // Hold first value
          num2,     // Hold second value
          num3,     // Hold third value
          num4,     // Hold fourth value
          num5,     // Hold fifth value
          sumVal,   // Sum value
          avgVal;   // Average value
    
    //Initialize Variables
    num1 = 28.0; // First value is 28
    num2 = 32.0; // Second value is 32
    num3 = 37.0; // Third value is 37
    num4 = 24.0; // Fourth value is 24
    num5 = 33.0; // Fifth value is 33
    
    //Map inputs to outputs -> The Process
    sumVal = num1 + num2 + num3 + num4 + num5;  // Calculating sum
    avgVal = sumVal/5;                          // Calculating average
            
    //Display Results
    cout << "The average value is " << avgVal << "." << endl;
    
    //Exit stage right

    return 0;
}

