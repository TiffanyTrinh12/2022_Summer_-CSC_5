/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/main.cc to edit this template
 */

/* 
 * File:   main.cpp
 * Author: Tiffany Trinh
 * Created on July 12, 2022, 9:04 PM
 * Purpose: Sum
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
    unsigned short num;
    int sum;
    
    //Initialize Variables
    cin >> num;
    sum = 0;
    
    //Map inputs to outputs -> The Process
    for (int cnt = 0; cnt <= num; cnt++){
        sum += cnt;
    }
    //Display Results
    cout << "Sum = " << sum;
    
    //Exit stage right

    return 0;
}

