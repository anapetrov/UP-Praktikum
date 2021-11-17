#include <iostream>
using std::cin;
using std::cout;
// По въведени от стандартния вход две цели числа да се изведе произведението в интервала между тях.
// Вход: 5 10 Изход: 151200
int main() {
    int number1, number2;
    cin >> number1 >> number2;
    int product = 1;
    if (number1 > number2) {
        int help;
        help = number1;
        number1 = number2;
        number2 = help;
    }
    for (int i = number1; i <= number2; i++) {
        product *= i;
    }
    cout << product;
    return 0;
}
