/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/main.cc to edit this template
 */

/* 
 * File:   main.cpp
 * Author: Tiffany Trinh
 * Created on July 6, 2022, 12:24 PM
 * Purpose: Trig Functions
 */

//System Libraries
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

//User Libraries

//Global Constants
//Mathematical/Physics/Conversions, Higher dimensioned arrays

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Initialize the Random Number Seed
    
    //Declare Variables
    float angDeg;     // Angle in Degrees
    float angRad;   // Angle in Radians
    float angSin;   // Sine of Angle
    float angCos;   // Cosine of Angle
    float angTan;   // Tangent of Angle
    
    //Initialize Variables
    cin >> angDeg;  // Obtain angle in degrees
    
    //Map inputs to outputs -> The Process
    angRad = (angDeg * M_PI) / 180;   // Convert angle from degrees to radians
    angSin = sin(angRad);           // Calculate sine of angle
    angCos = cos(angRad);           // Calculate cosine of angle
    angTan = tan(angRad);           // Calculate tangent of angle
    
    //Display Results
    cout << "Calculate trig functions" << endl;
    cout << "Input the angle in degrees." << endl;
    cout << "sin(" << setprecision(0) << fixed << angDeg << ") = " << setprecision(4) << fixed << angSin << endl;
    cout << "sin(" << setprecision(0) << fixed << angDeg << ") = " << setprecision(4) << fixed << angCos << endl;
    cout << "sin(" << setprecision(0) << fixed << angDeg << ") = " << setprecision(4) << fixed << angTan;
    
    //Exit stage right

    return 0;
}

