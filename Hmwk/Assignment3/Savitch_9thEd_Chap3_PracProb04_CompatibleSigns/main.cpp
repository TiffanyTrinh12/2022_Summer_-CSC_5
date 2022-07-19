/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/main.cc to edit this template
 */

/* 
 * File:   main.cpp
 * Author: Tiffany Trinh
 * Created on July 10, 2022, 10:12 PM
 * Purpose:  Compatible Signs
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
    string sign1, sign2, elmt1, elmt2;
    
    //Initialize Variables
    cin >> sign1 >> sign2;
    
    //Map inputs to outputs -> The Process
    cout << "Horoscope Program which examines compatible signs." << endl;
    cout << "Input 2 signs." << endl;
    
    if (sign1 == "Aries" || sign1 == "Leo" || sign1 == "Sagittarius")
    {
        elmt1 = "Fire";
    }
    else if (sign1 == "Taurus" || sign1 == "Virgo" || sign1 == "Capricorn")
    {
        elmt1 = "Earth";
    }
    else if (sign1 == "Gemini" || sign1 == "Libra" || sign1 == "Aquarius")
    {
        elmt1 = "Water";
    }
    else if (sign1 == "Cancer" || sign1 == "Scorpio" || sign1 == "Pisces")
    {
        elmt1 = "Water";
    }
    
    if (sign2 == "Aries" || sign2 == "Leo" || sign2 == "Sagittarius")
    {
        elmt2 = "Fire";
    }
    else if (sign2 == "Taurus" || sign2 == "Virgo" || sign2 == "Capricorn")
    {
        elmt2 = "Earth";
    }
    else if (sign2 == "Gemini" || sign2 == "Libra" || sign2 == "Aquarius")
    {
        elmt2 = "Water";
    }
    else if (sign2 == "Cancer" || sign2 == "Scorpio" || sign2 == "Pisces")
    {
        elmt2 = "Water";
    }
    
    //Display Results
    
    if (elmt1 == elmt2)
    {
        cout << sign1 << " and " << sign2 << " are compatible " << elmt1 << " signs.";
    }
    else
    {
        cout << sign1 << " and " << sign2 << " are not compatible signs.";
    }
    
    //Exit stage right

    return 0;
}

