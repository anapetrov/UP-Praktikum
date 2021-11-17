#include <iostream>
using std::cin;
using std::cout;
// Да се напише програма, която въвежда от клавиатурата цяло число n и
// масив от n реални числа. Да се намерят минималния и максималния елемент на масива.
int main() {
    const int size = 20;
    int number;
    cin >> number;
    while (number >= size || number < 0) {
        cout << "Invalid input plese enter another size: ";
        cin >> number;
    }
    int array[size];
    for (int i = 0; i < number; i++) {
        cin >> array[i];
    }
    int maxNumber, minNumber;
    for (int i = 0; i < number; i++) {
        if (i == 0) {
            maxNumber = array[i];
            minNumber = array[i];
        }
        else {
            if (array[i] > maxNumber) maxNumber = array[i];
            else if (array[i] < minNumber) minNumber = array[i];
        }
    }
    cout << "MAX: " << maxNumber << " MIN: " << minNumber;
    return 0;
}