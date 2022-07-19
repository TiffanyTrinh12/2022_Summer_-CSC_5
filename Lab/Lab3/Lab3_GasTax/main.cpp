/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/main.cc to edit this template
 */

/* 
 * File:   main.cpp
 * Author: Tiffany Trinh
 * Created on July 8, 2022, 1:20 PM
 * Purpose: Calculate Gas Tax Percentage and profit
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
    float excTax,    // excise tax
            salTax,  // sales tax
            ctFee,   // cap-and-trade fee
            fedTax,  // federal excise tax
            comPrft, // company profit
            gasPrc,  // gas price
            tax1,    // tax for 1 gallon of gas
            tax2,    // tax on gas price
            govTax,  // government taxes
            newPrft, // new profit made
            prftPct, // profit percentage
            gtaxPct; // government tax percentage
    
    //Initialize Variables
    excTax = 0.39f;   // 39 cents excise tax
    salTax = 0.08f;   // 8% sales tax
    ctFee = 0.10f;    // 10 cents cap-and-fee trade
    fedTax = 0.184f;  // 18.4 cents federal tax
    comPrft = 0.065f; // 6.5% company profit
    
    cout << "What was the price of gas per gallon for your car?" << endl;
    cin >> gasPrc;    // obtain gas price
    
    //Map inputs to outputs -> The Process
    //Calculate tax for 1 gallon of gas
    tax1 = excTax + ctFee + fedTax;
    
    //Calculate tax on gas price
    tax2 = gasPrc * salTax;
    
    //Calculate government taxes
    govTax = tax1 + tax2;
    
    //Calculate profit made
    newPrft = (gasPrc - govTax) * comPrft;
    
    //Calculate profit made in percentage
    prftPct = (newPrft / gasPrc) * 100;
    
    // Calculate government taxes in percentage
    gtaxPct = (govTax / gasPrc) * 100;
    
    //Display Results
    cout << setprecision(2) << fixed;
    cout << "Gas Company Profit in Percent = " << prftPct << "%" << endl;
    cout << "Gas Company Profit in Dollars = $" << newPrft << endl;
    cout << "Government Taxes in Percent = " << gtaxPct << "%" << endl;
    cout << "Government Taxes in Dollars = $" << govTax << endl;
    
    //Exit stage right

    return 0;
}

