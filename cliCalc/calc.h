#ifndef _CALC_H_
#define _CALC_H_

#include <iostream>
#include <limits>

double res(char opt, double n1, double n2) {
    double result = 0;
    switch (opt) {
        case '+':
            result = n1 + n2;
            break;
        
        case '-':
            result = n1 - n2;
            break;
        
        case '*':
            result = n1 * n2;
            break;

        case '/': 
            if (n2 == 0.0) {
                result = std::numeric_limits<double>::infinity();
            } else {
                result = n1 / n2;
            }
            break;

        default:
            result = std::numeric_limits<double>::quiet_NaN();
    }
    return result;
}

#endif