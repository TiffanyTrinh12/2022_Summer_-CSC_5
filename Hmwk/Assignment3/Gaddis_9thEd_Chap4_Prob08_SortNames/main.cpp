/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/main.cc to edit this template
 */

/* 
 * File:   main.cpp
 * Author: Tiffany Trinh
 * Created on July 10, 2022, 3:06 PM
 * Purpose: Sort Names
 */

//System Libraries
#include <iostream>
#include <string>
using namespace std;

//User Libraries

//Global Constants
//Mathematical/Physics/Conversions, Higher dimensioned arrays

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Initialize the Random Number Seed
    
    //Declare Variables
    string name1, name2, name3;
    
    //Initialize Variables
    cout << "Enter three names. " << endl;
    cin >> name1 >> name2 >> name3;
    
    //Map inputs to outputs -> The Process
    cout << "Sorting Names" << endl;
    cout << "Input 3 names" << endl;
    
    if ((name1 < name2) && (name1 < name3) && (name2 < name3))
    {
        cout << name1 << endl;
        cout << name2 << endl;
        cout << name3;
    }
    else if ((name1 < name2) && (name1 < name3) && (name2 > name3))
    {
        cout << name1 << endl;
        cout << name3 << endl;
        cout << name2;
    }
    else if ((name2 < name1) && (name2 < name3) && (name1 < name3))
    {
        cout << name2 << endl;
        cout << name1 << endl;
        cout << name3;
    }
    else if ((name2 < name1) && (name2 < name3) && (name1 > name3))
    {
        cout << name2 << endl;
        cout << name3 << endl;
        cout << name1;
    }
    else if ((name3 < name1) && (name3 < name2) && (name1 < name2))
    {
        cout << name3 << endl;
        cout << name1 << endl;
        cout << name2;
    }
    else 
    {
        cout << name3 << endl;
        cout << name2 << endl;
        cout << name1;
    }
    
    //Display Results
   
    
    //Exit stage right

    return 0;
}

