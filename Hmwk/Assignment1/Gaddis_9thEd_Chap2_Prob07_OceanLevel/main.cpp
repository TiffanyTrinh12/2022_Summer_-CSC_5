/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/main.cc to edit this template
 */

/* 
 * File:   main.cpp
 * Author: Tiffany Trinh
 * Created on June 29, 2022, 9:58 AM
 * Purpose: Calculate Ocean Level
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants
//Mathematical/Physics/Conversions, Higher dimensioned arrays
const float OCNRS = 1.5f;   //Number of mm ocean level rises per year

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Initialize the Random Number Seed
    
    //Declare Variables
    int year1,  //Number of years for first prediction
        year2,  //Number of years for second prediction
        year3;  //Number of years for third prediction
    float ocLv5,    //Ocean level in 5 years
          ocLv7,    //Ocean level in 7 years
          ocLv10;   //Ocean level in 10 years
    
    //Initialize Variables
    year1 = 5;  //5 years
    year2 = 7;  //7 years
    year3 = 10; //10 years
    
    //Map inputs to outputs -> The Process
    ocLv5 = OCNRS * year1;  //Calculate ocean level in 5 years
    ocLv7 = OCNRS * year2;  //Calculate ocean level in 7 years
    ocLv10 = OCNRS * year3; //Calculate ocean level in 10 years
    
    //Display Results
    cout << "The ocean's level will be " << ocLv5  << " mm in 5 years." << endl;
    cout << "The ocean's level will be " << ocLv7  << " mm in 7 years." << endl;
    cout << "The ocean's level will be " << ocLv10 << " mm in 10 years." << endl;
    
    //Exit stage right

    return 0;
}

