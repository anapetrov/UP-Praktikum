#include <iostream>
using std::cin;
using std::cout;
using std::endl;
// Да се напише програма, която въвежда от клавиатурата низ и символ. Да се изведе колко пъти се среща 
// символът в низа и , ако се среща да го замести със символа *.
int main() {
	const int MAX_SIZE = 10;
	char array[MAX_SIZE];
	char symbol;
	int count = 0;
	int i = 0;
	cin.getline(array, MAX_SIZE - 1, '\n');
	cout << "Enter symbol: ";
	cin.get(symbol);
	for (int i = 0; array[i] != '\0'; i++)
	{
		if (array[i] == symbol) {
			count++;
			array[i] = '*';
		}
	}
	cout << count << endl;

	for (int i = 0; i < MAX_SIZE - 1; i++) {
		cout << array[i];
	}
	return 0;
}
