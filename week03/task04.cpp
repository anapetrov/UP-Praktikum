#include <iostream>
using namespace std;

// От клавиатурата се въвеждат произволен брой числа. Намерете сбора на всички числа до въвеждането на 0.

// Пример:

// Вход: 1 2 3 0 5

// Изход: 6

int main() {
    int temp; 
    int sum=0;
    do{
        cin>>temp;
        sum +=temp;
    } while(temp!=0);
    cout<<sum;
    return 0;
}