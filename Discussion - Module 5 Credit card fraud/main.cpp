/*
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

#include <iostream>

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    return EXIT_SUCCESS;
}
