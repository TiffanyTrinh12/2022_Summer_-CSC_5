/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/main.cc to edit this template
 */

/* 
 * File:   main.cpp
 * Author: Tiffany Trinh
 * Created on July 14, 2022, 11:08 PM
 * Purpose: Assignment 4 Menu
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
    int choose;
    
    //Initialize Variables
    do{
        cout << "Choose from the following Menu Items" << endl;
        cout << "Problem 0" << endl;
        cout << "Problem 1" << endl;
        cout << "Problem 2" << endl;
        cout << "Etc......" << endl;
        cout << "10 or greater, all negatives to exit" << endl;
        cin >> choose;
        
        switch(choose){
            case 0:{ 
                cout << "Enter a positive integer." << endl;
                //Declare Variables
    unsigned short num;
    int sum;
    
    //Initialize Variables
    cin >> num;
    sum = 0;
    
    //Map inputs to outputs -> The Process
    for (int cnt = 0; cnt <= num; cnt++){
        sum += cnt;
    }
    //Display Results
    cout << "Sum = " << sum;
    break;}
            case 1:{ 
                cout << "How many days did you work?" << endl;
                //Declare Variables
    short nDays;    //Number of days worked
    int salAmt;     //salary amount earned in pennies per day
    int totSal;   //total salary 
    
    //Initialize Variables
    cin >> nDays;
    salAmt = 1;
    totSal = 1;
    
    //Map inputs to outputs -> The Process
    if (nDays < 1){
        cout << "Invalid number of days entered.";
    }
    else{
        //Calculate double time pay
        for (int cnt = 2; cnt <= nDays; cnt++){
            salAmt = salAmt * 2;
            totSal = totSal + salAmt;
        }
        
        //Calculate dollar amount
        int salDol = totSal / 100;
        
        //Calculate amount of pennies
        int salPen = totSal % 100;
        
        cout << "Pay = $" << salDol << ".";
        if (salPen < 10){
            cout << "0";
        }
        else{
            cout << "";
        }
        cout << salPen;
    }
    break;}
            case 2:{ 
                cout << "Enter a number." << endl;
                //Declare Variables
    int num, min, max;
    
    //Initialize Variables
    max = 0;
    min = 2;
    
    //Map inputs to outputs -> The Process
    while (num != -99){
        cin >> num;
        if (num > max){
            max = num;
        }
        else if ((num != -99) && (num < min)){
            min = num;
        }
    }
    //Display Results
    cout << "Smallest number in the series is " << min << endl;
    cout << "Largest number in the series is " << max;
    break;}
            case 3:{ 
                cout << "What is the size and letter for your rectangle?" << endl;
                //Declare Variables
    int rctSz;      //Rectangle size
    char rctDis;    //Rectangle display
    
    //Initialize Variables
    cin >> rctSz >> rctDis;
    
    //Map inputs to outputs -> The Process
    if (rctSz > 0 && rctSz <= 15){
        for (int rows = 1; rows <= rctSz; rows++){
            for (int length = 1; length <= rctSz; length++){
                cout << rctDis;
            
            }
            if (rows < rctSz) cout << endl;
        }
    }
    
    else{
        cout << "You can only choose numbers from 1 to 15.";
    }
    break;}
            case 4:{ 
                cout << "What is the size of your pattern?" << endl;
                //Declare Variables
    int patSz;  //Pattern size
    
    //Initialize Variables
    cin >> patSz;
    
    //Map inputs to outputs -> The Process
    //Pattern increases from 1 to 10
    for (int nRows = 1; nRows <= patSz; nRows++){
        for (int nCols = 1; nCols <= nRows; nCols++){
            cout << "+";
        }
        cout << endl << endl;
    }
    
    //Pattern decreases from 10 to 1
    for (int nRows = patSz; nRows > 0; nRows--){
        for (int nCols = 1; nCols <= nRows; nCols++){
            cout << "+";
        }
        if (nRows > 1) cout << endl << endl;
    }
    break;}
            case 5:{ 
                cout << "What is the number of liters of gas for your car and the number of miles traveled?" << endl;
            //Global Constants
//Mathematical/Physics/Conversions, Higher dimensioned arrays
const float LPG = 0.264179f;  //Number of liters per gallon
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
break;}
            case 6:{ 
                cout << "What is the number of liters of gas and the number of miles traveled for Car 1 and Car 2?" << endl;
            //Global Constants
//Mathematical/Physics/Conversions, Higher dimensioned arrays
const float LPG = 0.264179f;  //Number of liters per gallon
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
break;}
            case 7:{ 
                cout << "How much does the item cost today and how much did the item cost one year ago?" << endl;
                //Declare Variables
    float prePrc;   //Price of item one year ago
    float curPrc;   //Price of item today
    float infRt;    //Inflation rate
    char again;     //Allows user to try again
    
    //Initialize Variables
    
    
    //Map inputs to outputs -> The Process
    do{
        cin >> curPrc >> prePrc >> again;
        
        //Calculate inflation rate
        infRt = (curPrc - prePrc) / prePrc;
        
        //Convert inflation rate to percentage
        infRt = infRt * 100;
        
        cout << "Enter current price:" << endl;
        cout << "Enter year-ago price:" << endl;
        cout << "Inflation rate: " << setprecision(2) << fixed << infRt << "%" << endl << endl;
        cout << "Again:" << endl;
        
        if (again == 'y' || again == 'Y'){
            cout << endl;
        }
        else {
            cout << "";
        }
    }
    while (again == 'y' || again == 'Y');
    break;}
            case 8:{
                cout << "How much does the item cost today and how much did the item cost one year ago?" << endl;
                        //Declare Variables
    float prePrc;   //Price of item one year ago
    float curPrc;   //Price of item today
    float infRt;    //Inflation rate
    float infPct;   //Inflation rate in percent
    float estCst1;   //Estimated Cost in one year
    float estCst2;   //Estimated Cost in two years
    char again;     //Allows user to try again
    
    //Initialize Variables
    
    
    //Map inputs to outputs -> The Process
    do{
        cin >> curPrc >> prePrc >> again;
        
        //Calculate inflation rate
        infRt = (curPrc - prePrc) / prePrc;
        
        //Convert inflation rate to percentage
        infPct = infRt * 100;
        
        //Calculate estimated cost
        infRt = infPct / 100;
        estCst1 = (infRt * curPrc) + curPrc;
        estCst2 = (estCst1 * infRt) + estCst1;
        
        cout << "Enter current price:" << endl;
        cout << "Enter year-ago price:" << endl;
        cout << "Inflation rate: " << setprecision(2) << fixed << infPct << "%" << endl << endl;
        cout << "Price in one year: $" << setprecision(2) << fixed << estCst1 << endl;
        cout << "Price in two year: $" << setprecision(2) << fixed << estCst2 << endl << endl;
        cout << "Again:" << endl;
        
        if (again == 'y' || again == 'Y'){
            cout << endl;
        }
        else {
            cout << "";
        }
    }
    while (again == 'y' || again == 'Y');
    break;}
            case 9:{ 
                cout << "What are the three parameters?" << endl;
                //Function Prototypes
float max1(float, float);
float max2(float, float, float);
//Declare Variables
    float num1, num2, num3;
    
    //Initialize Variables
    cin >> num1 >> num2 >> num3;
    
    //Map inputs to outputs -> The Process
    
    //Display Results
    cout << "Enter first number:" << endl << endl;
    cout << "Enter Second number:" << endl << endl;
    cout << "Enter third number:" << endl << endl;
    cout << "Largest number from two parameter function:" << endl; 
    cout << max1(num1, num2) << endl << endl;
    cout << "Largest number from three parameter function:" << endl; 
    cout << max2(num1, num2, num3) << endl;
    
break;}
            default: cout << "Exiting the Menu" << endl;
        }
    }while(choose >= 0 && choose <=9);
    
    //Map inputs to outputs -> The Process
    
    
    //Display Results
    
    
    //Exit stage right

    return 0;
}

float max1(float num1, float num2){
        if(num1 > num2){
            return num1;
        }
        else {
            return num2;
        }
    }
    
    float max2(float num1, float num2, float num3){
        if(num1 > num2 && num1 > num3){
            return num1;
        }
        else if (num2 > num1 && num2 > num3){
            return num2;
        }
        else {
            return num3;
        }
    }