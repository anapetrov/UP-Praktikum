#include <iostream>
using std::cin;
using std::cout;
// Да се напише програма, която въвежда от клавиатурата цяло число n и масив от n цели числа. 
// Да се намерят и изведат: първият неотрицателен елемент на масива и сумата на елементите след него. 
// Ако няма такива да се изведе подходящо съобщение.
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
    int sumIndex = -1;
    int sum = 0;
    for (int i = 0; i < number; i++) {
        if (array[i] > 0) {
            sumIndex = i;
            break;
        }
    }
    if (sumIndex != -1) {
        for (int i = sumIndex; i < number; i++) {
            sum += array[i];
        }
        cout << array[sumIndex] << " Sum: " << sum;
    }
    else {
        cout << "All numbers are negative!";
    }
    return 0;
}