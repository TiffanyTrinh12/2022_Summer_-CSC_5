/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/main.cc to edit this template
 */

/* 
 * File:   main.cpp
 * Author: Tiffany Trinh
 * Created on July 12, 2022, 9:17 PM
 * Purpose: Pay in Pennies
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
    short nDays;    //Number of days worked
    int salAmt;     //salary amount earned in pennies per day
    int totSal;   //total salary 
    
    //Initialize Variables
    cin >> nDays;
    salAmt = 1;
    totSal = 1;
    
    //Map inputs to outputs -> The Process
    if (nDays < 1){
        cout << "Invalid number of days entered.";
    }
    else{
        //Calculate double time pay
        for (int cnt = 2; cnt <= nDays; cnt++){
            salAmt = salAmt * 2;
            totSal = totSal + salAmt;
        }
        
        //Calculate dollar amount
        int salDol = totSal / 100;
        
        //Calculate amount of pennies
        int salPen = totSal % 100;
        
        cout << "Pay = $" << salDol << ".";
        if (salPen < 10){
            cout << "0";
        }
        else{
            cout << "";
        }
        cout << salPen;
    }
    //Display output
    
    //Exit stage right

    return 0;
}

