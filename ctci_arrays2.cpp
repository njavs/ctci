// ctci_arrays2.cpp
//  practice
//
//  Created by N Sujela on 12/30/16.
//  Copyright © 2016 N Sujela. All rights reserved.

#include <iostream>
#include <cstdlib>
#include <cstring>
#include <string>
using namespace std;

//Write code to reverse a C-Style String. (C-String means that “abcd” is represented as
//five characters, including the null character.

int main()
{
    //define a C-style string
    char string[] = "hello";
    
    // get integer length of the string
    int len = int(strlen(string));
    
    // define destination array
    char reverse[len];
    
    // reverse the array
    for (int i = 0; i < len; i++){
        reverse[i] = string[len-i-1]; // WORKS.
        cout << reverse[i];
    }
}
