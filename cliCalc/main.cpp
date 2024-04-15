#include <iostream>
#include <fstream>
#include <cmath>
#include "calc.h"

using namespace std;

int main()
{
    double num1, num2, result;
    char opt;

    bool flag = true;

    result = 0;

    while (flag) {
        cout << "Please enter the operation to perform on numbers or q to quit: " << endl;
        cin >> opt;

        if (opt == 'q') {
            break;
        } else {
            cout << "Please enter the first number: " << endl;
            if (!(cin >> num1)) {
                cout << "Invalid input! Please input a number." << endl;
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                continue;
            }

            cout << "Please enter the second number: " <<endl;
            if (!(cin >> num2)) {
                cout << "Invalid input! Please input a number." << endl;
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                continue;
            }

            result = res(opt, num1, num2);

            if (isinf(result)) {
                cout << "Can't divide by 0" << endl;
            } else if (isnan(result)) {
                cout << "Please input a valid operator" << endl;
            } else {
                cout << "Results: " << result << endl;
            }
        }
    }

    return 0;
}
