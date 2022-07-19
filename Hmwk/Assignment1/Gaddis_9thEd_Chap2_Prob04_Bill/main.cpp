/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/main.cc to edit this template
 */

/* 
 * File:   main.cpp
 * Author: Tiffany Trinh
 * Created on June 28, 2022, 10:24 PM
 * Purpose: Calculate Restaurant Bill
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
    float mealCst,  // Meal cost
          amtTax,   // Tax amount
          amtTip,   // Tip amount
          totBill;  // Total bill
            
    //Initialize Variables
    mealCst = 88.67f;// Cost of patron's meal
    
    //Map inputs to outputs -> The Process
    amtTax = (6.75/100)* mealCst;       // Calculating Tax Amount
    amtTip = 0.2*(mealCst + amtTax);    // Calculating Tip Amount
    totBill = mealCst + amtTax + amtTip;// Calculating Total Bill
    
    //Display Results
    cout << "Meal Cost  = $" << mealCst << endl;
    cout << "Tax Amount = $" << amtTax << endl;
    cout << "Tip Amount = $" << amtTip << endl;
    cout << "Total Bill = $" << totBill << endl;
    
    //Exit stage right

    return 0;
}

