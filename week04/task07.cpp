#include <iostream>
using std::cin;
using std::cout;
using std::boolalpha;
// Да се напише програма, която въвежда от клавиатурата цяло число n и масив от n цели числа. 
// Да се провери дали масивът е симетричен(огледален, палиндром).
int main() {
	const int MAX_SIZE = 20;
	int number;
	int array[MAX_SIZE];
	cin >> number;
	while (number >= MAX_SIZE || number <= 0) {
		cout << "Invalid input plese enter another size: ";
		cin >> number;
	}
	for (int i = 0; i < number; i++) {
		cin >> array[i];
	}
	bool flag = true;
	for (int i = 0; i < number && flag; i++) {
		if (array[i] != array[number - 1 - i]) flag = false;
	}
	cout << boolalpha << flag;
	return 0;
}