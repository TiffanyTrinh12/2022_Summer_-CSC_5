/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/main.cc to edit this template
 */

/* 
 * File:   main.cpp
 * Author: Tiffany Trinh
 * Created on July 5, 2022, 10:58 PM
 * Purpose: Calculate Cookies Eaten and Total Calories
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
    unsigned short numCks;   // Number of cookies in one bag
    unsigned short numCal;   // Number of calories for one bag
    unsigned short cksAte;   // Number of cookies eaten
    float srvSize;   // Number of servings in one bag
    float cps;      // Number of cookies per serving
    float numSrv;  // Number of servings based on number of cookies eaten
    int totCal;     // Total calories consumed
    
    //Initialize Variables
    numCks = 40;    // 40 cookies in one bag
    srvSize = 10.0f;    // 10 servings in one bag
    numCal = 300;   // 300 calories for one bag
    cin >> cksAte;  // Obtain the numbers of cookies eaten
    
    //Map inputs to outputs -> The Process
    cps = numCks / srvSize;      // Calculating number of cookies per serving
    numSrv = cksAte / cps;     // Calculating number of servings from the amount of cookies eaten
    totCal = numCal * numSrv;  // Calculating total calories consumed
    
    //Display Results
    cout << "Calorie Counter" << endl;
    cout << "How many cookies did you eat?" << endl;
    cout << "You consumed " << totCal << " calories.";
    
    //Exit stage right

    return 0;
}

