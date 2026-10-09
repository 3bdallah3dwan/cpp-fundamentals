#include <iostream>
using namespace std;

int main()
{
    int AVG;

    cout << "Enter your average: ";
    cin >> AVG;

    if (AVG >= 90 && AVG <= 100) {
        cout << "Excellent";
    }
    else if (AVG >= 80 && AVG < 90) {
        cout << "Very Good";
    }
    else if (AVG >= 70 && AVG < 80) {
        cout << "Good";
    }
    else if (AVG >= 60 && AVG < 70) {
        cout << "Not Bad";
    }
    else if (AVG >= 0 && AVG < 60) {
        cout << "Failed";
    }
    else {
        cout << "Invalid average";
    }

    return 0;
}
