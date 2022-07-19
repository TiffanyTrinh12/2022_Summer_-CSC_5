/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/main.cc to edit this template
 */

/* 
 * File:   main.cpp
 * Author: Tiffany Trinh
 * Created on July 10, 2022, 2:20 PM
 * Purpose: Truth Table
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
    bool x, y;
    
    //Initialize Variables
    
    //Map inputs to outputs -> The Process
    
    //Display Results
    
    //Heading
    cout << "X Y !X !Y X&&Y X||Y X^Y X^Y^X X^Y^Y !X&&!Y "
         << "!(X||Y) !X||!Y !(X&&Y)" << endl;
    
    //First Row
    x=y=true;
    cout << (x? 'T' : 'F') << " ";
    cout << (y? 'T' : 'F') << "  ";
    cout << (!x? 'T' : 'F') << "  ";
    cout << (!y? 'T' : 'F') << "   ";
    cout << (x&&y? 'T' : 'F') << "    ";
    cout << (x||y? 'T' : 'F') << "   ";
    cout << (x^y? 'T' : 'F') << "    ";
    cout << (x^y^x? 'T' : 'F') << "     ";
    cout << (x^y^y? 'T' : 'F') << "      ";
    cout << (!x&&!y? 'T' : 'F') << "       ";
    cout << (!(x||y)? 'T' : 'F') << "      ";
    cout << (!x||!y? 'T' : 'F') << "       ";
    cout << (!(x&&y)? 'T' : 'F') << " ";
    cout << endl;
    
    //Second row
    y=false;
    cout << (x? 'T' : 'F') << " ";
    cout << (y? 'T' : 'F') << "  ";
    cout << (!x? 'T' : 'F') << "  ";
    cout << (!y? 'T' : 'F') << "   ";
    cout << (x&&y? 'T' : 'F') << "    ";
    cout << (x||y? 'T' : 'F') << "   ";
    cout << (x^y? 'T' : 'F') << "    ";
    cout << (x^y^x? 'T' : 'F') << "     ";
    cout << (x^y^y? 'T' : 'F') << "      ";
    cout << (!x&&!y? 'T' : 'F') << "       ";
    cout << (!(x||y)? 'T' : 'F') << "      ";
    cout << (!x||!y? 'T' : 'F') << "       ";
    cout << (!(x&&y)? 'T' : 'F') << " ";
    cout << endl;
    
    //Third Row
    x=false;
    y=true;
    cout << (x? 'T' : 'F') << " ";
    cout << (y? 'T' : 'F') << "  ";
    cout << (!x? 'T' : 'F') << "  ";
    cout << (!y? 'T' : 'F') << "   ";
    cout << (x&&y? 'T' : 'F') << "    ";
    cout << (x||y? 'T' : 'F') << "   ";
    cout << (x^y? 'T' : 'F') << "    ";
    cout << (x^y^x? 'T' : 'F') << "     ";
    cout << (x^y^y? 'T' : 'F') << "      ";
    cout << (!x&&!y? 'T' : 'F') << "       ";
    cout << (!(x||y)? 'T' : 'F') << "      ";
    cout << (!x||!y? 'T' : 'F') << "       ";
    cout << (!(x&&y)? 'T' : 'F') << " ";
    cout << endl;
    
    //Fourth row
    x=y=false;
    cout << (x? 'T' : 'F') << " ";
    cout << (y? 'T' : 'F') << "  ";
    cout << (!x? 'T' : 'F') << "  ";
    cout << (!y? 'T' : 'F') << "   ";
    cout << (x&&y? 'T' : 'F') << "    ";
    cout << (x||y? 'T' : 'F') << "   ";
    cout << (x^y? 'T' : 'F') << "    ";
    cout << (x^y^x? 'T' : 'F') << "     ";
    cout << (x^y^y? 'T' : 'F') << "      ";
    cout << (!x&&!y? 'T' : 'F') << "       ";
    cout << (!(x||y)? 'T' : 'F') << "      ";
    cout << (!x||!y? 'T' : 'F') << "       ";
    cout << (!(x&&y)? 'T' : 'F') << " ";
    cout << endl;
    
    //Exit stage right

    return 0;
}

