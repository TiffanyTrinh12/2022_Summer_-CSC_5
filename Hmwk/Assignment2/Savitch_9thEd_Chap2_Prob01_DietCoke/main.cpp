/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/main.cc to edit this template
 */

/* 
 * File:   main.cpp
 * Author: Tiffany Trinh
 * Created on July 6, 2022, 10:35 PM
 * Purpose: Find Amount of Soda Cans
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants
//Mathematical/Physics/Conversions, Higher dimensioned arrays
const float SWPCT = 0.001f; // Amount of artificial sweetener

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Initialize the Random Number Seed
    
    //Declare Variables
     int ltDose;    // Lethal dose
     float msWgt;   // Mouse's Weight
     float dtWgt;   // Dieter's Weight
     int sdWgt;     // Soda Can Weight
     float desWgt;  // Dieter's Desired Weight
     int numCans;   // Number of soda cans that can be consumed
     
    //Initialize Variables
    cin >> desWgt;
    ltDose = 5;
    msWgt = 35.0f;
    dtWgt = 45359.2f;
    sdWgt = 350;
    
    //Map inputs to outputs -> The Process
    numCans = desWgt * (dtWgt/100)*(ltDose/msWgt)*(1/(sdWgt*SWPCT));    // Calculate amount of soda cans that can be consumed
    
    //Display Results
    cout << "Program to calculate the limit of Soda Pop Consumption." << endl;
    cout << "Input the desired dieters weight in lbs." << endl;
    cout << "The maximum number of soda pop cans" << endl;
    cout << "which can be consumed is " << numCans << " cans";
    
    //Exit stage right

    return 0;
}

