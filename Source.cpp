#include <iostream>
#include "intRange.h"

int main()
{
    double number;
    intRange a;
    cin >> a;

    cout << "Enter a number to check for entry in the specified range: "; cin >> number;
    a.rangeCheckResult(a.rangeCheck(a, number));

    ++a; cout << a;
    --a; cout << a;

    a++; cout << a;
    a--; cout << a;


    return 0;
}