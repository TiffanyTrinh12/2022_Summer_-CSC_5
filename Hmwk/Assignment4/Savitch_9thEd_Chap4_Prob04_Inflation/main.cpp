/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/main.cc to edit this template
 */

/* 
 * File:   main.cpp
 * Author: Tiffany Trinh
 * Created on July 14, 2022, 4:45 PM
 * Purpose: Inflation
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
    float prePrc;   //Price of item one year ago
    float curPrc;   //Price of item today
    float infRt;    //Inflation rate
    char again;     //Allows user to try again
    
    //Initialize Variables
    
    
    //Map inputs to outputs -> The Process
    do{
        cin >> curPrc >> prePrc >> again;
        
        //Calculate inflation rate
        infRt = (curPrc - prePrc) / prePrc;
        
        //Convert inflation rate to percentage
        infRt = infRt * 100;
        
        cout << "Enter current price:" << endl;
        cout << "Enter year-ago price:" << endl;
        cout << "Inflation rate: " << setprecision(2) << fixed << infRt << "%" << endl << endl;
        cout << "Again:" << endl;
        
        if (again == 'y' || again == 'Y'){
            cout << endl;
        }
        else {
            cout << "";
        }
    }
    while (again == 'y' || again == 'Y');
        
    //Display Results
    
    
    //Exit stage right

    return 0;
}

