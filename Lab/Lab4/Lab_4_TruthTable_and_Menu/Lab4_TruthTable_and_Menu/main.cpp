/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on July 8th, 2021, 10:41 AM
 * Purpose:  Basic Menu for Homework and Exams
 */

//System Libraries
#include <iostream>   //Input/Output Library
#include <iomanip>
using namespace std;  //STD Name-space where Library is compiled

//User Libraries

//Global Constants not Variables
//Math/Physics/Science/Conversions/Dimensions

//Function Prototypes

//Code Begins Execution Here with function main
int main(int argc, char** argv) {
    //Set random number seed once here
    
    //Declare variables here
    int choose;//Choose a problem
    
    //Initialize variables here
    do{
        //List of Problems which can be run by the program
        cout<<"Choose from the following Menu Items"<<endl;
        cout<<"Problem 0"<<endl;
        cout<<"Problem 1"<<endl;
        cout<<"Problem 2"<<endl;
        cout<<"Etc......"<<endl;
        cout<<"10 or greater, all negatives to exit"<<endl;
        cin>>choose;
        
        switch(choose){
            case 0:{string name1, name2, name3;
    
    //Initialize or input i.e. set variable values
    cin >> name1 >> name2 >> name3;
    
    //Map inputs -> outputs
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
    }break;}
            case 1:{unsigned short numBooks, points;
    
    //Initialize or input i.e. set variable values
    cin >> numBooks;

    //Map inputs -> outputs
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
    
    //Display the outputs
    cout << "Book Worm Points" << endl;
    cout << "Input the number of books purchased this month." << endl;
    cout << "Books purchased =" << setw(3) << numBooks << endl;
    cout << "Points earned   =" << setw(3) << points;break;}
            case 2:{const float mnthFee = 10.0f;

//Function Prototypes

//Execution Begins Here!

    //Set the random number seed
    
    //Declare Variables
    float begBal, chkFee, lowBal, newBal;
    unsigned short nChecks;
    
    //Initialize or input i.e. set variable values
    cin >> begBal >> nChecks;
    
    //Map inputs -> outputs
    if (begBal < 400)
    {
        lowBal = 15.0f;
    }
    else
    {
        lowBal = 0;
    }
    
    if ((nChecks == 0) && (nChecks < 20))
    {
        chkFee = nChecks * 0.10;
    }
    else if ((nChecks > 19) && (nChecks < 40))
    {
        chkFee = nChecks * 0.08;
    }
    else if ((nChecks > 39) && (nChecks < 60))
    {
        chkFee = nChecks * 0.06;
    }
    else
    {
        chkFee = nChecks * 0.04;
    }
        
    
    newBal = begBal - (chkFee + mnthFee + lowBal);

    //Display the outputs
    cout << "Monthly Bank Fees" << endl;
    cout << "Input Current Bank Balance and Number of Checks" << endl;
    cout << setprecision(2) << fixed;
    cout << "Balance     $" << setw(9) << begBal << endl;
    cout << "Check Fee   $" << setw(9) << chkFee << endl;
    cout << "Monthly Fee $" << setw(9) << mnthFee << endl;
    cout << "Low Balance $" << setw(9) << lowBal << endl;
    cout << "New Balance $" << setw(9) << newBal;break;}
            case 3:{string name1, name2, name3;
    unsigned short time1, time2, time3;
    
    //Initialize or input i.e. set variable values
    cin >> name1 >> time1 >> name2 >> time2 >> name3 >> time3;
    
    //Map inputs -> outputs
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
    }break;}
            case 4:{char pkg;
    float mnthFee, numHrs, addHrs, bill;
    
    //Initialize Variables
    cin >> pkg >> numHrs;
    
    //Map inputs to outputs -> The Process
    if (pkg == 'A')
    {
        if (numHrs <= 10)
        {
            bill = 9.95f;
        }
        else
        {
            addHrs = numHrs - 10;
            bill = 9.95 + (2.0 * addHrs);
        }
    }
    else if (pkg == 'B')
    {
        if (numHrs <= 20)
        {
            bill = 14.95f;
        }
        else
        {
            addHrs = numHrs - 20;
            bill = 14.95 + (1.0 * addHrs);
        }
    }
    else if (pkg == 'C')
    {
            bill = 19.95f;
    }
     
    
    //Display Results
    cout << "ISP Bill" << endl;
    cout << "Input Package and Hours" << endl;
    cout << "Bill = $" << setw(6) << setprecision(2) << fixed << bill;
;break;}
            case 5:{char user1, user2;
    
    //Initialize or input i.e. set variable values
    cin >> user1 >> user2;
    
    //Map inputs -> outputs
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
    break;}
            case 6:{int arbYr, n1000s, n100s, n10s, n1s;
            
    //Initialize Variables
    cin >> arbYr;
    
    //Map inputs to outputs -> The Process
    cout << "Arabic to Roman numeral conversion." << endl;
    cout << "Input the integer to convert." << endl;
    
    
    if ((arbYr < 1000) || (arbYr > 3000))
    {
        cout << arbYr << " is Out of Range!";
    }
    else
    {
        n1000s = (arbYr / 1000) % 10;
        n100s = (arbYr / 100) % 10;
        n10s = (arbYr / 10) % 10;
        n1s = (arbYr / 1) % 10;
        
        cout << n1000s << n100s << n10s << n1s << " is equal to ";
        
        switch(n1000s){
            case 3: cout << "M";
            case 2: cout << "M";
            case 1: cout << "M";
        }
            
        switch(n100s){
            case 9: cout << "CM"; break;
            case 8: cout << "DCCC"; break;
            case 7: cout << "DCC"; break;
            case 6: cout << "DC"; break;
            case 5: cout << "D"; break;
            case 4: cout << "CD"; break;
            case 3: cout << "C";
            case 2: cout << "C";
            case 1: cout << "C";
        }
        
        switch(n10s){
            case 9: cout << "XC"; break;
            case 8: cout << "LXXX"; break;
            case 7: cout << "LXX"; break;
            case 6: cout << "LX"; break;
            case 5: cout << "L"; break;
            case 4: cout << "XL"; break;
            case 3: cout << "X";
            case 2: cout << "X";
            case 1: cout << "X";
        }
        
        switch(n1s){
            case 9: cout << "IX"; break;
            case 8: cout << "VIII"; break;
            case 7: cout << "VII"; break;
            case 6: cout << "VI"; break;
            case 5: cout << "V"; break;
            case 4: cout << "IV"; break;
            case 3: cout << "I";
            case 2: cout << "I";
            case 1: cout << "I";
        }
    }break;}
            case 7:{string sign1, sign2, elmt1, elmt2;
    
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
    }break;}
            case 8:cout<<"Place Problem 8 here"<<endl;break;
            case 9:cout<<"Place Problem 9 here"<<endl;break;
            default:cout<<"Exiting the Menu"<<endl;
        }
    }while(choose>=0 && choose<=9);

    return 0;
}