#include <iostream>
#include <fstream>
#include <cmath>
#include "calc.h"

using namespace std;

void menu() {
    cout << "\nWelcome to the advanced CLI calculator\n"
         << "1. Addition\n"
         << "2. Subtraction\n"
         << "3. Multiplication\n"
         << "4. Division\n"
         << "5. Square\n"
         << "6. Square Root\n"
         << "7. Cube\n"
         << "8. Cube Root\n"
         << "9. Exponential\n"
         << "10. Log(base 10)\n"
         << "0. To exit the calculator\n\n";
}

double getNumber(const string& prompt) {
    double num;
    cout << prompt;
    while (!(cin >> num)) {
        cout << "Invalid input! Please input a number.\n";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    return num;
}

int main() 
{
    double num1, num2;
    int option;
    char opt;

    while (true)
    {
        menu();
        cout << "Choose option from the menu: ";
        option = getNumber("");

        if (option == 0) { 
            cout << "Thank you for using the calculator!\n";
            break;
        }

        if (option >= 1 && option <= 4) {
            num1 = getNumber("Please enter the first number: ");

            num2 = getNumber("Please enter the first number: ");

        } else if (option >= 5 && option <= 10) {
            num1 = getNumber("Please enter the number: ");
        }

        switch (option)
        {
        case 1: res(num1, num2, '+'); break;
        case 2: res(num1, num2, '-'); break;
        case 3: res(num1, num2, '*'); break;
        case 4: res(num1, num2, '/'); break;
        case 5: res(num1, 2, 's'); break;
        case 6: res(num1, 0.5, 'r'); break;
        case 7: res(num1, 3, 'c'); break;
        case 8: res(num1, 1.0/3.0, 'b'); break;
        case 9: 
            num2 = getNumber("Please enter the exponent: ");
            res(num1,num2, 'e');
            break;
        case 10: res(num1, 0, 'l'); break;
        
        default:
        cout << "Invalid option!\n";
            break;
        }
    }
    
    return 0;
}