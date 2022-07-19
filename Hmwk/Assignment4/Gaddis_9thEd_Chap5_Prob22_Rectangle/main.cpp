/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/main.cc to edit this template
 */

/* 
 * File:   main.cpp
 * Author: Tiffany Trinh
 * Created on July 14, 2022, 9:58 AM
 * Purpose: Rectangle
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
    int rctSz;      //Rectangle size
    char rctDis;    //Rectangle display
    
    //Initialize Variables
    cin >> rctSz >> rctDis;
    
    //Map inputs to outputs -> The Process
    if (rctSz > 0 && rctSz <= 15){
        for (int rows = 1; rows <= rctSz; rows++){
            for (int length = 1; length <= rctSz; length++){
                cout << rctDis;
            
            }
            if (rows < rctSz) cout << endl;
        }
    }
    
    else{
        cout << "You can only choose numbers from 1 to 15.";
    }
    
    //Display Results
    
    
    //Exit stage right

    return 0;
}

