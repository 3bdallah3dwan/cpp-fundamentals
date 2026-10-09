#include <iostream>
using namespace std;

void printArray(int arr[], int size = 5) {
    cout << "start print array : " << endl;

    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }

    cout << "end print array " << endl;
    cout << endl;
}

void createAndPrint(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    printArray(arr, size);
}

int main()
{
    int arr[5], test[6];

    cout << "Enter 5 numbers: " << endl;
    createAndPrint(arr, 5);

    cout << "Enter 6 numbers: " << endl;
    createAndPrint(test, 6);

    return 0;
}
