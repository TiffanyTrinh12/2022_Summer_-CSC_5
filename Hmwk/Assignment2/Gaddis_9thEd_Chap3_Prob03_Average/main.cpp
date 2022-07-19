/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/main.cc to edit this template
 */

/* 
 * File:   main.cpp
 * Author: Tiffany Trinh
 * Created on July 5, 2022, 10:35 PM
 * Purpose: Calculate Average of 5 Values
 */

//System Libraries
#include <iostream>
#include <iomanip>   // Format library
using namespace std;

//User Libraries

//Global Constants
//Mathematical/Physics/Conversions, Higher dimensioned arrays

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Initialize the Random Number Seed
    
    //Declare Variables
    int num1, num2, num3, num4, num5;   // Hold 5 values
    float avg;                          // Hold average of the 5 values
    
    //Initialize Variables
    cin >> num1 >> num2 >> num3 >> num4 >> num5;    // Obtain 5 values
    
    //Map inputs to outputs -> The Process
    avg = (num1 + num2 + num3 + num4 + num5) / 5.0; // Calculate average of the 5 values
    
    //Display Results
    cout << "Input 5 numbers to average." << endl;
    cout << "The average = " << setprecision(1) << fixed << avg;

    //Exit stage right

    return 0;
}

