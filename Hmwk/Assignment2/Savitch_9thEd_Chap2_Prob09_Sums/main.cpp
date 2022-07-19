/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/main.cc to edit this template
 */

/* 
 * File:   main.cpp
 * Author: Tiffany Trinh
 * Created on July 6, 2022, 9:40 PM
 * Purpose: Sum
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
    int num, sumPos, sumNeg, sumAll;
    
    //Initialize Variables
    sumPos = 0;
    sumNeg = 0;
    sumAll = 0;
    
    //Map inputs to outputs -> The Process
     for (int count = 0; count < 10; count++) 
    { 
        cin >> num;
        if (num > 0)
        {
            sumPos = sumPos + num;
        }
        else if (num < 0)
        {
            sumNeg = sumNeg + num;
        }
  
        sumAll = sumAll + num;
        
    }
    
    //Display Results
    cout << "Input 10 numbers, any order, positive or negative" << endl;
    cout << "Negative sum =" << setw(4) << sumNeg << endl;
    cout << "Positive sum =" << setw(4) << sumPos << endl;
    cout << "Total sum    =" << setw(4) << sumAll;

    //Exit stage right

    return 0;
}

