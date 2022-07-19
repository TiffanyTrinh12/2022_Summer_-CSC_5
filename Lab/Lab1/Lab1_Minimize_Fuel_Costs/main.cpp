/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/main.cc to edit this template
 */

/* 
 * File:   main.cpp
 * Author: Tiffany Trinh
 * Created on June 29, 2022, 3:39 PM
 * Purpose: Lab 1 - Minimize Fuel Costs
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
    float gauge,    // Gas gauge in percentage
          tnkSz,    // Gas tank size in gallons
          mpg,      // Gas mileage in mpg
          gasReq,   // Gas required for full tank in gallons
          gasPrc1,  // Regular gas price at Station 1 in $/Gallon
          mile1,    // From home to Station 1 in miles
          cstFil1,  // Cost to fill up at Station 1 in $
          totDst1,  // Total distance driven to Station 1 in miles
          cstTrv1,  // Cost to travel to Station 1 in $
          totCst1,  // Total cost to Station 1 in $
          ppg1,     // Price per gallon to Station 1 in $
          gasPrc2,  // Regular gas price at Station 2 in $/Gallon
          mile2,    // From home to Station 2 in miles
          cstFil2,  // Cost to fill up at Station 2 in $
          totDst2,  // Total distance driven to Station 2 in miles
          cstTrv2,  // Cost to travel to Station 2 in $
          totCst2,  // Total cost to Station 2 in $
          ppg2;     // Price per gallon to Station 2 in $
       
            
            
    //Initialize Variables
    gauge = 75.00f;  // 75%
    tnkSz = 22.0f;   // 22 gallons
    mpg = 17.0f;     // 17 miles per gallon
    
    gasPrc1 = 4.25f;   // $4.25 per gallon
    mile1 = 10.0f;     // 10 miles
    totDst1 = 20.0f;   // 20 miles
    
    gasPrc2 = 4.09f;   // $4.09 per gallon
    mile2 = 20.0f;     // 20 miles
    totDst2 = 40.0f;   // 40 miles
    
    //Map inputs to outputs -> The Process
    gasReq = tnkSz * (1 - (gauge/100)); // Calculate gallons required
    
    cstFil1 = gasReq * gasPrc1;         // Calculate cost to fill at Station 1
    cstTrv1 = totDst1 / mpg * gasPrc1;  // Calculate cost to travel to Station 1
    totCst1 = cstFil1 + cstTrv1;        // Calculate total cost to Station 1
    ppg1 = totCst1 / gasReq;            // Calculate price per gallon to Station 1
    
    cstFil2 = gasReq * gasPrc2;         // Calculate cost to fill at Station 2
    cstTrv2 = totDst2 / mpg * gasPrc2;  // Calculate cost to travel to Station 2
    totCst2 = cstFil2 + cstTrv2;        // Calculate total cost to Station 2
    ppg2 = totCst2 / gasReq;            // Calculate price per gallon to Station 2
    
    
    //Display Results
    cout << "Knowns for Your Particular Vehicle" << endl;
    cout << gauge << "% = Gas Gauge % Full" << endl;
    cout << tnkSz << " = Gas Tank Size in Gallons" << endl;
    cout << mpg << " = Gas Mileage in MPG" << endl;
    cout << gasReq << " = Gallons Required for Full Tank" << endl << endl;
    
    cout << "Gas Station 1" << endl;
    cout << "$" << setprecision(3) << gasPrc1 << " = Regular Gas Price in $/Gallon" << endl;
    cout << mile1 << " = From Home to Gas Station in Miles" << endl;
    cout << "$" << setprecision(4) << cstFil1 << " = Cost to Fill Up" << endl;
    cout << totDst1 << " = Total Distance Driven to Gas Station in Miles" << endl;
    cout << "$" << setprecision(3) << cstTrv1 << " = Cost to Travel to Gas Station" << endl;
    cout << "$" << setprecision(4) << totCst1 << " = Total Cost to Gas Station" << endl;
    cout << "$" << setprecision(3) << ppg1 << " = Price per Gallon to Gas Station" << endl << endl;
    
    cout << "Gas Station 2" << endl;
    cout << "$" << setprecision(3) << gasPrc2 << " = Regular Gas Price in $/Gallon" << endl;
    cout << mile2 << " = From Home to Gas Station in Miles" << endl;
    cout << "$" << setprecision(4) << cstFil2 << " = Cost to Fill Up" << endl;
    cout << totDst2 << " = Total Distance Driven to Gas Station in Miles" << endl;
    cout << "$" << setprecision(3) << cstTrv2 << " = Cost to Drive to Gas Station" << endl;
    cout << "$" << setprecision(4) << totCst2 << " = Total Cost to Gas Station" << endl;
    cout << "$" << setprecision(3) << ppg2 << " = Price per Gallon to Gas Station" << endl;
    
    //Exit stage right

    return 0;
}

