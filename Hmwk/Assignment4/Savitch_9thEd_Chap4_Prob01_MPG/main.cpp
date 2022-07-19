/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/main.cc to edit this template
 */

/* 
 * File:   main.cpp
 * Author: Tiffany Trinh
 * Created on July 14, 2022, 2:07 PM
 * Purpose: MPG
 */

//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants
//Mathematical/Physics/Conversions, Higher dimensioned arrays
const float LPG = 0.264179f;  //Number of liters per gallon

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Initialize the Random Number Seed
    
    //Declare Variables
    float nGas;   //Number of liters of gasoline
    int nMiles; //Number of miles
    float mpg;  //Miles per gallon
    char again; //Letter that stops loop
    
    
    //Initialize Variables
    
    
    //Map inputs to outputs -> The Process
    do{
        cin >> nGas >> nMiles >> again;
        
        //Convert liters to gallons
        nGas = nGas * LPG; 
        
        //Calculate miles per gallon
        mpg = nMiles / nGas;
        
        cout << "Enter number of liters of gasoline:" << endl << endl;
        cout << "Enter number of miles traveled:" << endl << endl;
        cout << "miles per gallon:" << endl << setprecision(2) << fixed << mpg << endl;
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

