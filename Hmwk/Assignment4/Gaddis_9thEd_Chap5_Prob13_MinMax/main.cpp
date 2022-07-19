/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/main.cc to edit this template
 */

/* 
 * File:   main.cpp
 * Author: Tiffany Trinh
 * Created on July 13, 2022, 11:11 PM
 * Purpose: Min and Max
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
    int num, min, max;
    
    //Initialize Variables
    max = 0;
    min = 2;
    
    //Map inputs to outputs -> The Process
    while (num != -99){
        cin >> num;
        if (num > max){
            max = num;
        }
        else if ((num != -99) && (num < min)){
            min = num;
        }
    }
    //Display Results
    cout << "Smallest number in the series is " << min << endl;
    cout << "Largest number in the series is " << max;
    
    //Exit stage right

    return 0;
}

