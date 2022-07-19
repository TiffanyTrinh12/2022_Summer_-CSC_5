/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/main.cc to edit this template
 */

/* 
 * File:   main.cpp
 * Author: Tiffany Trinh
 * Created on July 6, 2022, 12:05 PM
 * Purpose: Fahrenheit to Celcius Conversion
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
    float fhrnHt;
    float cels;
    
    //Initialize Variables
    cin >> fhrnHt;
    
    //Map inputs to outputs -> The Process
    cels = (5.0/9.0) * (fhrnHt - 32);
    
    //Display Results
    cout << "Temperature Converter" << endl;
    cout << "Input Degrees Fahrenheit" << endl;
    cout << setprecision(1) << fixed;
    cout << fhrnHt << " Degrees Fahrenheit = " << cels << " Degrees Centigrade";
    
    //Exit stage right

    return 0;
}

