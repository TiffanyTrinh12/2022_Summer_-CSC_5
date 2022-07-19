/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/main.cc to edit this template
 */

/* 
 * File:   main.cpp
 * Author: Tiffany Trinh
 * Created on July 10, 2022, 9:20 PM
 * Purpose:  Roman Conversion
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
    int arbYr, n1000s, n100s, n10s, n1s;
            
    //Initialize Variables
    cin >> arbYr;
    
    //Map inputs to outputs -> The Process
    cout << "Arabic to Roman numeral conversion." << endl;
    cout << "Input the integer to convert." << endl;
    
    
    if ((arbYr < 1000) || (arbYr > 3000))
    {
        cout << arbYr << " is Out of Range!";
    }
    else
    {
        n1000s = (arbYr / 1000) % 10;
        n100s = (arbYr / 100) % 10;
        n10s = (arbYr / 10) % 10;
        n1s = (arbYr / 1) % 10;
        
        cout << n1000s << n100s << n10s << n1s << " is equal to ";
        
        switch(n1000s){
            case 3: cout << "M";
            case 2: cout << "M";
            case 1: cout << "M";
        }
            
        switch(n100s){
            case 9: cout << "CM"; break;
            case 8: cout << "DCCC"; break;
            case 7: cout << "DCC"; break;
            case 6: cout << "DC"; break;
            case 5: cout << "D"; break;
            case 4: cout << "CD"; break;
            case 3: cout << "C";
            case 2: cout << "C";
            case 1: cout << "C";
        }
        
        switch(n10s){
            case 9: cout << "XC"; break;
            case 8: cout << "LXXX"; break;
            case 7: cout << "LXX"; break;
            case 6: cout << "LX"; break;
            case 5: cout << "L"; break;
            case 4: cout << "XL"; break;
            case 3: cout << "X";
            case 2: cout << "X";
            case 1: cout << "X";
        }
        
        switch(n1s){
            case 9: cout << "IX"; break;
            case 8: cout << "VIII"; break;
            case 7: cout << "VII"; break;
            case 6: cout << "VI"; break;
            case 5: cout << "V"; break;
            case 4: cout << "IV"; break;
            case 3: cout << "I";
            case 2: cout << "I";
            case 1: cout << "I";
        }
    }
    
    
    //Display Results
    
    //Exit stage right

    return 0;
}

