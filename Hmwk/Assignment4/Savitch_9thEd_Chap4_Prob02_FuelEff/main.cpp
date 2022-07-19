/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/main.cc to edit this template
 */

/* 
 * File:   main.cpp
 * Author: Tiffany Trinh
 * Created on July 14, 2022, 4:25 PM
 * Purpose: Fuel Efficiency
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
    float c1Gas;   //Number of liters of gasoline for Car 1
    float c1Mpg;   //Miles per gallon for Car 1
    int c1Mil;     //Number of miles for Car 1
    float c2Gas;   //Number of liters of gasoline for Car 2
    float c2Mpg;   //Miles per gallon for Car 2
    int c2Mil;     //Number of miles for Car 2
    char again;    //Letter that stops loop
    
    
    //Initialize Variables
    
    
    //Map inputs to outputs -> The Process
    do{
        cin >> c1Gas >> c1Mil >> c2Gas >> c2Mil >> again;
        
        //Convert liters to gallons for Car 1
        c1Gas = c1Gas * LPG; 
        
        //Calculate miles per gallon for Car 1
        c1Mpg = c1Mil / c1Gas;
        
        //Print mpg for Car 1
        cout << "Car 1" << endl;
        cout << "Enter number of liters of gasoline:" << endl;
        cout << "Enter number of miles traveled:" << endl;
        cout << "miles per gallon: " << setprecision(2) << fixed << c1Mpg << endl << endl;
        
        //Convert liters to gallons for Car 2
        c2Gas = c2Gas * LPG; 
        
        //Calculate miles per gallon for Car 2
        c2Mpg = c2Mil / c2Gas;
        
        //Print mpg for Car 2
        cout << "Car 2" << endl;
        cout << "Enter number of liters of gasoline:" << endl;
        cout << "Enter number of miles traveled:" << endl;
        cout << "miles per gallon: " << setprecision(2) << fixed << c2Mpg << endl << endl;
        
        if (c1Mpg > c2Mpg){
            cout << "Car 1 is more fuel efficient" << endl << endl;
        }
        else {
            cout << "Car 2 is more fuel efficient" << endl << endl;
        }
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

