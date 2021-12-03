#include <iostream>
// Напишете програма, която по дадено въведено от потребителя естествено число проверява

// дали всяка негова цифра е равна на сумата на двете цифри, намиращи се след нея.

// Примери:

// 532110 - > да (0+1 = 1, 1+1 = 2, 1+2 = 3, 2+3 = 5 - редица на Фибоначи)

// 7431 - > да (1+3 = 4, 3 + 4 = 7)

// 11235 - > не

// 98065 - > не
using std::cin;
using std::cout;

bool check(int number){
    if(number >= 0 && number <= 99){
        return false;
    }
    while(number >= 100){
        if(number / 100 % 10 != (number / 10 % 10) + (number % 10)){
            return false;
        }
        number /=10;
    }
    return true;
}

int main() {
    int number;
    cin >> number;
    cout << number << " -> ";
    if(check(number)){
        cout << "yes";
    }
    else {
        cout << "no";
    }    
    return 0;
}
