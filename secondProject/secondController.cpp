//
//  secondController.cpp
//  secondProject
//
//  Created by Adams, Kyle on 1/27/17.
//  Copyright © 2017 Adams, Kyle. All rights reserved.
//

#include "secondController.hpp"
#include <iostream>

using namespace std;

int secondController :: changeNumber()
{
    return 42;
}

void secondController :: changeWithPointer(int * numberPointedTo)
{
    *numberPointedTo += 9000;
}

void secondController :: changeWithPointerTwo(string * namePointedTo)
{
    *namePointedTo = "Fabio Horhae";
}

void secondController :: start()
{
    cout << "Coding is sooo much fun" << endl;
    cout << "Set the int here" << endl;
    int myNumber;
    cin >> myNumber;
    tryNumbers(myNumber);
    int * numberPointer = &myNumber;
    cout << "Your new number is " << myNumber + 1;
    myNumber = changeNumber();
   
    cout << ". And now its changed to " << myNumber << "." << endl;
    
    cout << "changed again?? " << myNumber << endl;
    cout << "I need your name please." << endl;
    string myName;
    cin >> myName;
    cout << "Ok, your name is " << myName << "For now..." << endl;
    changeWithPointer(numberPointer);
     changeWithPointerTwo(namePointer);    string * namePointer = &myName;
    
    cout << "Your name is now " << myName << endl;
    
    
    
}

void secondController :: tryNumbers(int providedNumber)
{
    cout << "I was sent " << providedNumber << endl;
}


