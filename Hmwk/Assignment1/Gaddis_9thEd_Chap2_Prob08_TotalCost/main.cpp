/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/main.cc to edit this template
 */

/* 
 * File:   main.cpp
 * Author: Tiffany Trinh
 * Created on June 29, 2022, 10:39 AM
 * Purpose: Calculate Total Cost for Purchase
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
    float prc1,     //item 1 price
          prc2,     // item 2 price
          prc3,     //item 3 price
          prc4,     //item 4 price
          prc5,     //item 5 price
          slTax,    //sales tax
          subTot,   //subtotal
          amtTax,   //amount of sales tax
          total;    //total cost
    
    //Initialize Variables
    prc1 = 15.95f;  //item 1 cost $15.95
    prc2 = 24.95f;  //item 2 cost $24.95
    prc3 = 6.95f;   //item 3 cost $6.95
    prc4 = 12.95f;  //item 4 cost $12.95
    prc5 = 3.95f;   //item 5 cost $3.95
    slTax = 0.07f;  //7% sales tax
    
    //Map inputs to outputs -> The Process
    subTot = prc1 + prc2 + prc3 + prc4 + prc5;  //Calculate subtotal
    amtTax = subTot * slTax;                    //Calculate amount of sales tax
    total = subTot + amtTax;                    //Calculate total
            
    //Display Results
    cout << "Item 1    = $" << prc1 << endl;
    cout << "Item 2    = $" << prc2 << endl;
    cout << "Item 3    = $" << prc3 << endl;
    cout << "Item 4    = $" << prc4 << endl;
    cout << "Item 5    = $" << prc5 << endl;
    cout << "Subtotal  = $" << subTot << endl;
    cout << "Sales Tax = $" << amtTax << endl;
    cout << "Total     = $" << total << endl;
    
    //Exit stage right

    return 0;
}

