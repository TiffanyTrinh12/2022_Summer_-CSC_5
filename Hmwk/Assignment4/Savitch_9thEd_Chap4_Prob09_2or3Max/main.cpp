/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/main.cc to edit this template
 */

/* 
 * File:   main.cpp
 * Author: Tiffany Trinh
 * Created on July 14, 2022, 8:39 PM
 * Purpose: Find max of parameters
 */

//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants
//Mathematical/Physics/Conversions, Higher dimensioned arrays

//Function Prototypes
float max1(float, float);
float max2(float, float, float);

//Execution Begins Here
int main(int argc, char** argv) {
    //Initialize the Random Number Seed
    
    //Declare Variables
    float num1, num2, num3;
    
    //Initialize Variables
    cin >> num1 >> num2 >> num3;
    
    //Map inputs to outputs -> The Process
    
    //Display Results
    cout << "Enter first number:" << endl << endl;
    cout << "Enter Second number:" << endl << endl;
    cout << "Enter third number:" << endl << endl;
    cout << "Largest number from two parameter function:" << endl; 
    cout << max1(num1, num2) << endl << endl;
    cout << "Largest number from three parameter function:" << endl; 
    cout << max2(num1, num2, num3) << endl;
    
    //Exit stage right

    return 0;
}

float max1(float num1, float num2){
        if(num1 > num2){
            return num1;
        }
        else {
            return num2;
        }
    }
    
    float max2(float num1, float num2, float num3){
        if(num1 > num2 && num1 > num3){
            return num1;
        }
        else if (num2 > num1 && num2 > num3){
            return num2;
        }
        else {
            return num3;
        }
    }