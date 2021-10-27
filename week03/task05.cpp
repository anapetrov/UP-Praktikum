#include <iostream>
using namespace std;

// От клавиатурата се въвежда естествено число. Намерете сбора на цифрите му.

// Пример:

// Вход: 5550

// Изход: 15

int main() {
    int number;
    int sum = 0;
    cin >> number;

    for (int i = number; i > 0; i /= 10) {
        sum += i % 10;
    }

    cout << sum;
    return 0;

}