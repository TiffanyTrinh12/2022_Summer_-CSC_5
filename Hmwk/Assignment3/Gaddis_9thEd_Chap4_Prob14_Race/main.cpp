/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/main.cc to edit this template
 */

/* 
 * File:   main.cpp
 * Author: Tiffany Trinh
 * Created on July 10, 2022, 7:44 PM
 * Purpose: Race
 */

//System Libraries
#include <iostream>
#include <iomanip>
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
    short time1, time2, time3;
    
    //Initialize Variables
    cout << "What are the names of the three runners and their times?" << endl;
    cin >> name1 >> time1 >> name2 >> time2 >> name3 >> time3;
    
    //Map inputs to outputs -> The Process
    if (time1 < 0 || time2 < 0 || time3 < 0)
    {
        cout << "Invalid number for times." << endl;
    }
    else
    {
        cout << "Race Ranking Program" << endl;
        cout << "Input 3 Runners" << endl;
        cout << "Their names, then their times" << endl;
    
        if ((time1 < time2) && (time1 < time3) && (time2 < time3))
        {
            cout << name1 << "\t" << setw(3) << time1 << endl;
            cout << name2 << "\t" << setw(3) << time2 << endl;
            cout << name3 << "\t" << setw(3) << time3;
        }
        else if ((time1 < time2) && (time1 < time3) && (time2 > time3))
        {
            cout << name1 << "\t" << setw(3) << time1 << endl;
            cout << name3 << "\t" << setw(3) << time3 << endl;
            cout << name2 << "\t" << setw(3) << time2;
        }
        else if ((time2 < time1) && (time2 < time3) && (time1 < time3))
        {
            cout << name2 << "\t" << setw(3) << time2 << endl;
            cout << name1 << "\t" << setw(3) << time1 << endl;
            cout << name3 << "\t" << setw(3) << time3;
        }
        else if ((time2 < time1) && (time2 < time3) && (time1 > time3))
        {   
            cout << name2 << "\t" << setw(3) << time2 << endl;
            cout << name3 << "\t" << setw(3) << time3 << endl;
            cout << name1 << "\t" << setw(3) << time1;
        }
        else if ((time3 < time1) && (time3 < time2) && (time1 < time2))
        {
            cout << name3 << "\t" << setw(3) << time3 << endl;
            cout << name1 << "\t" << setw(3) << time1 << endl;
            cout << name2 << "\t" << setw(3) << time2;
        }
        else
        {
            cout << name3 << "\t" << setw(3) << time3 << endl;
            cout << name2 << "\t" << setw(3) << time2 << endl;
            cout << name1 << "\t" << setw(3) << time1;
        }
    }
    
    //Display Results
    
    //Exit stage right

    return 0;
}

