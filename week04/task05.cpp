#include <iostream>
//От клавиатурата се въвеждат N числа. Да се изведат в обратен ред.
using std::cout;
using std::cin;
using std::endl;
int main() {
	const int MAX_SIZE = 20;
	int number;
	cin >> number;
	int array[MAX_SIZE];
	for (int i = 0; i < number; i++) {
		cin >> array[i];
	}
	for (int i = number - 1; i >= 0; i--) {
		cout << array[i] << " ";
	}
    return 0;
}