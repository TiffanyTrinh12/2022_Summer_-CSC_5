/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/main.cc to edit this template
 */

/* 
 * File:   main.cpp
 * Author: Tiffany Trinh
 * Created on June 28, 2022, 4:19 PM
 * Purpose: Calculate amount of sales East Coast will make
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
    float prcSal,  // Percent of Total Sales
          totSal,  // Total Sales
          salGen;  // Number of sales produced
    
    //Initialize Variables
    prcSal = 0.58f;     // 58 percent
    totSal = 8.6e6f;    // 8.6 million dollars in sales
    
    //Map inputs to outputs -> The Process
    salGen = totSal * prcSal;   // Amount of sales generated from total
    
    //Display Results
    cout << "The East Coast division will generate $" << salGen << " this year." << endl;
    
    //Exit stage right

    return 0;
}

