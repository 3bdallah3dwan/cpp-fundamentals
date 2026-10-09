#include <iostream>
using namespace std;

int main()
{
    int AVG;

    cout << "Enter your average: ";
    cin >> AVG;

    if (AVG < 0 || AVG > 100) {
        cout << "Invalid average";
        return 0;
    }

    switch (AVG / 10)
    {
        case 10:
        case 9:
            cout << "Excellent";
            break;

        case 8:
            cout << "Very Good";
            break;

        case 7:
            cout << "Good";
            break;

        case 6:
            cout << "Not Bad";
            break;

        default:
            cout << "Failed";
    }

    return 0;
}
