#ifndef _CALC_H_
#define _CALC_H_

#include <iostream>
#include <limits>
#include <cmath>

using namespace std;

void res(double num1, double num2, char opt) {
    switch (opt)
    {
    case '+':
        cout << num1 << " + " << num2 << " is " 
        << num1 + num2 << endl;
        break;

    case '-': 
        cout << num1 << " - " << num2 << " is "
        << num1 - num2 << endl; 
        break;

    case '*': 
        cout << num1 << " * " << num2 << " is "
        << num1 * num2 << endl;
        break;

    case '/':
        if (num2 == 0.0) {
            cout << "Can not divide by 0" << endl;
        } else {
            cout << num1 << " / " << num2 << " is "
            << num1 / num2 << endl;
        }
        break;

    case 's': 
        cout << num1 << " squared is " << pow(num1 ,num2)
        << endl;
        break;

    case 'r':     
        cout << "Square root of " << num1 << " is " 
        << pow(num1, num2) << endl;
        break;

    case 'c':  
        cout << "Cube of " << num1 << " is " 
        << pow(num1, num2) << endl;   
        break;

    case 'b':  
        cout << "Cube root of " << num1 << " is "
        << pow(num1, num2) << endl;   
        break;

    case 'e':     
        cout << num1 << " raised to the power " << num2
        << " is " << pow(num1, num2) << endl;
        break;

    case 'l':   
        cout << "The log value of " << num1 << " is "
        << log10(num1) << endl;  
        break;

    default:
        cout << "Unsupported operation!" << endl;
        break;
    }
}
#endif