/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/main.cc to edit this template
 */

/* 
 * File:   main.cpp
 * Author: Tiffany Trinh
 * Created on July 14, 2022, 1:04 PM
 * Purpose: Pattern
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
    int patSz;  //Pattern size
    
    //Initialize Variables
    cin >> patSz;
    
    //Map inputs to outputs -> The Process
    //Pattern increases from 1 to 10
    for (int nRows = 1; nRows <= patSz; nRows++){
        for (int nCols = 1; nCols <= nRows; nCols++){
            cout << "+";
        }
        cout << endl << endl;
    }
    
    //Pattern decreases from 10 to 1
    for (int nRows = patSz; nRows > 0; nRows--){
        for (int nCols = 1; nCols <= nRows; nCols++){
            cout << "+";
        }
        if (nRows > 1) cout << endl << endl;
    }
    
    //Display Results
    
    //Exit stage right

    return 0;
}

