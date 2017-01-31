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
    changeWithPointer(numberPointer);
    
}

void secondController :: tryNumbers(int providedNumber)
{
    cout << "I was sent " << providedNumber << endl;
}


