/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/main.cc to edit this template
 */

/* 
 * File:   main.cpp
 * Author: Tiffany Trinh
 * Created on June 23, 2022, 5:32 PM
 * Purpose: Calculate Total Sales Tax 
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
    float stTax,    // State sales tax
          cntyTax,  // County sales tax
          totTax;   // Total sales tax
    int amtPrch;    // Amount for purchase in $'s
    
    //Initialize Variables
    stTax = 0.04f;      // 4% state sales tax
    cntyTax = 0.02f;    // 2% county sales tax
    amtPrch = 95;       // $95 purchase
            
    //Map inputs to outputs -> The Process
    totTax = (stTax + cntyTax) * amtPrch;   // Total sales tax of purchase
    
    //Display Results
    cout << "The total sales tax on a $95 purchase is $" << totTax << "." << endl;
    
    //Exit stage right

    return 0;
}

