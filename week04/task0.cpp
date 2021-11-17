#include <iostream>
using std::cin;
using std::cout;
// По въведено число n и намерете сумата на от n до 0;
// Вход: 5 Изход: 1 + 2 + 3 + 4 + 5 = 15
int main() {
    int number;
    cin >> number;
    int sum = 0;
    for (int i = 1; i <= number; i++) {
        if (i == number) cout << i;
        else cout << i << " + ";
        sum += i;
    }
    cout << " = " << sum;
    return 0;
}