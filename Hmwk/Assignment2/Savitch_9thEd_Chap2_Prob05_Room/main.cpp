/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/main.cc to edit this template
 */

/* 
 * File:   main.cpp
 * Author: Tiffany Trinh
 * Created on July 6, 2022, 9:15 PM
 * Purpose: Determine if meeting room follows regulations
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
    int maxRoom;    // Maximum Room Capacity
    int numPpl;     // Number of people attending
    int addPpl;     // Number of people that may legally attend
    int excPpl;     // Number of people that need to be excluded
    
    //Initialize Variables
    cin >> maxRoom >> numPpl;
    
    //Map inputs to outputs -> The Process
    
    //Display Results
    cout << "Input the maximum room capacity and the number of people" << endl;
    
    if (numPpl <= maxRoom)
    {
        addPpl = maxRoom - numPpl;  // Calculate additional people
        cout << "Meeting can be held." << endl;
        cout << "Increase number of people by " << addPpl << " will be allowed without violation.";
    }
    else
    {
        excPpl = numPpl - maxRoom;  // Calculate people who need to be excluded
        cout << "Meeting cannot be held." << endl;
        cout << "Reduce number of people by " << excPpl << " to avoid fire violation.";
    }

    //Exit stage right

    return 0;
}

