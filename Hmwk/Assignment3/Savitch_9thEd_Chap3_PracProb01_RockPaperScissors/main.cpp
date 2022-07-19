/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/main.cc to edit this template
 */

/* 
 * File:   main.cpp
 * Author: Tiffany Trinh
 * Created on July 10, 2022, 8:29 PM
 * Purpose:  Rock Paper Scissors
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
    char user1, user2;
    
    //Initialize Variables
    cout << "Choose Rock, Paper, or Scissors. ";
    cin >> user1 >> user2;
    
    //Map inputs to outputs -> The Process
    if ( (user1 == 'P' || user1 == 'p' || user1 == 'S' || user1 == 's' || user1 == 'R' || user1 == 'r') && (user2 == 'P' || user2 == 'p' || user2 == 'R' || user2 == 'r' || user2 == 'S' || user2 == 's') )
    {
        cout << "Rock Paper Scissors Game" << endl;
        cout << "Input Player 1 and Player 2 Choices" << endl;
    
        if ((user1 == 'P' || user1 == 'p') && (user2 == 'R' || user2 == 'r'))
        {
            cout << "Paper covers rock.";
        }
        else if ((user1 == 'S' || user1 == 's') && (user2 == 'P' || user2 == 'p'))
        {
            cout << "Scissors cuts paper.";
        }
        else if ((user1 == 'R' || user1 == 'r') && (user2 == 'S' || user2 == 's'))
        {
            cout << "Rock breaks scissors.";
        }
        else if ((user2 == 'P' || user2 == 'p') && (user1 == 'R' || user1 == 'r'))
        {
            cout << "Paper covers rock.";
        }
        else if ((user2 == 'S' || user2 == 's') && (user1 == 'P' || user1 == 'p'))
        {
            cout << "Scissors cuts paper.";
        }
        else if ((user2 == 'R' || user2 == 'r') && (user1 == 'S' || user1 == 's'))
        {
            cout << "Rock breaks scissors.";
        }
        else if ((user1 == 'R' || user1 == 'r') && (user2 == 'R' || user2 == 'r'))
        {
            cout << "Nobody wins.";
        }
        else if ((user1 == 'S' || user1 == 's') && (user2 == 'S' || user2 == 's'))
        {
            cout << "Nobody wins.";
        }
        else if ((user1 == 'P' || user1 == 'p') && (user2 == 'P' || user2 == 'p'))
        {
            cout << "Nobody wins.";
        }
    }
    else
    {
        cout << "You can only enter P for paper, R for rock, and S for scissors.";
    }
    //Display Results
    
    //Exit stage right

    return 0;
}

