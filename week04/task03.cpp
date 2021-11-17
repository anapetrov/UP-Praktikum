#include <iostream>
using std::cin;
using std::cout;
// Да се напише програма, която въвежда от клавиатурата цяло число n и масив от n реални числа. 
// Да се намерят минималния и максималния елемент на масива. Да се разменят местата им в масива и да се изведе 
// новия масив.
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
    int maxNumberIndex, minNumberIndex;
    for (int i = 0; i < number; i++) {
        if (i == 0) {
            maxNumberIndex = i;
            minNumberIndex = i;
        }
        else {
            if (array[i] > array[maxNumberIndex]) maxNumberIndex = i;
            else if (array[i] < array[minNumberIndex]) minNumberIndex = i;
        }
    }
    int helpNumber;
    helpNumber = array[minNumberIndex];
    array[minNumberIndex] = array[maxNumberIndex];
    array[maxNumberIndex] = helpNumber;

    for (int i = 0; i < number; i++) {
        cout << array[i] << " ";
    }
    return 0;
}