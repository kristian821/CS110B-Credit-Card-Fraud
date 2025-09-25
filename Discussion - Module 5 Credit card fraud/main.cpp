/*
 Question 1
 You have been hired by the SFPD fraud unit to help detect credit card fraud.  They have given you a list of 20 stolen credit card numbers, and want you to write a program that can detect if someone is attempting to use one of these credit card numbers at the local Target store.
 Your program should first read in a list of credit card numbers from a file into an array, and ask the user for a credit card number they would like to use.  Then, search the array of credit card numbers to see if the credit card number is in the list.

 To simplify, we will use a 6 digit credit card number, e.g. 424238.  Your list of stolen credit card numbers must be stored in an array of 20 ints.  You can get a list from my website and read it in to initialize your array, it is sorted from lowest to highest card number.  To get the list into your hills directory, you can use the wget command from the hills prompt:

 wget https://fog.ccsf.edu/~mluttrel/cs110b/cards.txt
 After running this command from the hills prompt, the file cards.txt will be in your hills directory, and your C++ program can use the file input code discussed in this module to read it into an array.  If you are using another development environment, like repl.it, Xcode, etc. you will need to research how to add text files to your project and use them.

 Get this working with linear search first.  If you have time, do a binary search function.  Think about the number of comparisons each one does.

 Question 2
 The SFPD fraud unit has another assignment for you.  They have given you a list of 20 known credit card fraudsters at large, and want you to write a program that can detect if one of them is attempting to purchase something at the local Target store.  Unfortunately, the SFPD has not sorted the list for you, so your program must sort the list first.

 To get the list into your hills directory, you can use the wget command from the hills prompt:

 wget https://fog.ccsf.edu/~mluttrel/cs110b/names.txt
 After running this command from the hills prompt, the file names.txt will be in your hills directory, and your C++ program can use the file input code discussed in this module to read it into an array.  If you are using another development environment, like repl.it, Xcode, etc. you will need to research how to add text files to your project and use them.

 Your program should:

 read in the 20 names from the file into an array of 20 string objects
 sort the array using either bubble sort or selection sort
 ask the user for the last name of a customer who is attempting to use a credit card.
 search your array to see if this name is on the fraudster list.  At first, you can use a linear search like in Question 1.  If you have time, you can use a binary search because the list is sorted!
 */

//
//  main.cpp
//  Discussion - Module 5 Credit card fraud
//
//  Created by Kristian Mitchell on 9/24/25.
//
//  Question 2
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

// Function Prototypes
string readNames();
void outputFunction();

int main()
{
    cout << "Running main" << endl;
    
    cout << "Calling readNames()" << endl;
    readNames();
    
    cout << "Trying to write now..." << endl;
    outputFunction();
    
    return 0;
}

string readNames()
{
    cout << "readNames(): Starting" << endl;
    ifstream inputFile;
    string name;
    cout << "Opening file" << endl;
    inputFile.open("names.txt");
    cout << "Reading name" << endl;
    inputFile >> name;
    cout << "Name is: " << endl;
    cout << name << endl;
    cout << "done." << endl;
    return name;
}

void outputFunction()
{
    ofstream outputFile;
    outputFile.open("demo.txt");
    
    outputFile << "Hello";
    outputFile.close();
}
