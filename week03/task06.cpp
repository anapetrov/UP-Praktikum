#include <iostream>
using namespace std;
// Напишете програма, която, по дадено число а и степенен показател n, намира а нa n-та степен.

// Пример:

// Вход: 2 5

// Изход: 32

int main() {
    double number;
    int degree;
    cin >> number >> degree;
    double answer=1;
    if(degree==0){
        cout<<answer;
        return 0;
    }
    if(degree<0){
        number = 1/number;
        degree *=-1;
    }
    for(int i=0; i<degree; i++) {
        answer*=number;
    }
    cout<<answer;
    return 0;
}
