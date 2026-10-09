#include <iostream>
using namespace std;

int main()
{
    int ch;
    double number1;
    double number2;

    for (;;) {
        cout << "\n1- +" << endl;
        cout << "2- -" << endl;
        cout << "3- *" << endl;
        cout << "4- /" << endl;
        cout << "5- Exit" << endl;

        cout << "Operator is: ";
        cin >> ch;

        if (ch == 5)
            break;

        if (ch < 1 || ch > 5) {
            cout << "Invalid choice" << endl;
            continue;
        }

        cout << "Number One: ";
        cin >> number1;

        cout << "Number Two: ";
        cin >> number2;

        if (ch == 1) {
            cout << number1 + number2 << endl;
        }
        else if (ch == 2) {
            cout << number1 - number2 << endl;
        }
        else if (ch == 3) {
            cout << number1 * number2 << endl;
        }
        else if (ch == 4) {
            if (number2 != 0) {
                cout << number1 / number2 << endl;
            }
            else {
                cout << "Cannot divide by zero" << endl;
            }
        }
    }

    return 0;
}
