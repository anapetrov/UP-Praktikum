#include <iostream>
// Матейко се натъкнал на списък от числа. Сега той се чуди колко от тях са
// му интересни. Матейко смята едно число за интересно ако цифрите му са в
// ненамаляващ ред. Напишете програма, която по даден списък от
// неотрицателни числа проверява дали те са интересни.
// Вход: На първия ред ще има едно число N - броя числа от списъка на
// Матейко. Следват N реда с по едно число - числата от списъка на Матейко.
// Изход: Трябва да се изведат N реда, на всеки от които има YES или NO :
// всеки ред показва дали съответното число от списъка е интересно.
// Пример:
// Вход:
// 5
// 123
// 1111
// 15678
// 341
// 0
using std::cin;
using std::cout;
const int MAX_SIZE = 128;

void input(int array[], int size){
    for(int i = 0; i < size; i++){
        cin >> array[i];
    }
}

bool check(int number){
    while(number >= 10){
        if (number % 10 < number / 10 % 10) {
            return false;
        } 
        number/=10;
    }
    return true;
}

void output(int array[], int size){
    for(int i = 0; i < size; i++) {
        if(check(array[i])) {
            cout << "YES";
        }
        else {
            cout << "NO";
        }
        cout << '\n';
    }
}

int main() {
    int number;
    int array[MAX_SIZE];
    cin >> number;
    while(number <= 0 || number > MAX_SIZE){
        cout << "Please enter another size: ";
        cin >> number;
    }
    input(array, number);
    output(array, number);

    return 0;
}