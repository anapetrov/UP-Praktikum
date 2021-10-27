#include <iostream>
using namespace std;
// Напишете програма, която, по дадено число а и степенен показател n, намира а нa n-та степен.

// Пример:

// Вход: 2 5

// Изход: 32

int main() {
    int number, degree;
    cin >> number >> degree;
    int answer=1;
    for(int i=0; i<degree; i++) {
        answer*=number;
    }
    cout<<answer;
    return 0;
}