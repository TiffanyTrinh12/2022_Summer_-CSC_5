/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/main.cc to edit this template
 */

/* 
 * File:   main.cpp
 * Author: Tiffany Trinh
 * Created on July 10, 2022, 4:11 PM
 * Purpose: Books
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
    unsigned short numBooks, points;
    
    //Initialize Variables
    cout << "How many books have you purchased this month? ";
    cin >> numBooks;
    
    //Map inputs to outputs -> The Process
    if (numBooks == 0)
    {
        points = 0;
    }
    else if (numBooks == 1)
    {
        points = 5;
    }
    else if (numBooks == 2)
    {
        points = 15;
    }
    else if (numBooks == 3)
    {
        points = 30;
    }
    else
    {
        points = 60;
    }
    
    //Display Results
    cout << "Book Worm Points" << endl;
    cout << "Input the number of books purchased this month." << endl;
    cout << "Books purchased =" << setw(3) << numBooks << endl;
    cout << "Points earned   =" << setw(3) << points << endl;
    
    //Exit stage right

    return 0;
}

