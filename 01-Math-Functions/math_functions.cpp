#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

int main()
{
    int number1;
    int number2;

    cout << "Number one is: ";
    cin >> number1;

    cout << "Number two is: ";
    cin >> number2;

    cout << "The maximum number between number one & number two is: "
         << max(number1, number2) << endl;

    int number;

    cout << "Enter a number: ";
    cin >> number;

    if (number >= 0) {
        cout << "The square root of " << number << " is: "
             << sqrt(number) << endl;
    }
    else {
        cout << "Cannot calculate the square root of a negative number." << endl;
    }

    cout << "The square of " << number << " is: "
         << pow(number, 2) << endl;

    return 0;
}
