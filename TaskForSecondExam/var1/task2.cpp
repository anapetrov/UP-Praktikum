#include <iostream>
// Да се изведат първите n естествени числа, двоичния запис на които
// съдържа равен брой 0 и 1, като получавате броя им в конзолата.
using std::cin;
using std::cout;

bool zeroOne(int num){
    int countZero=0, countOne=0;
    while (num){
        if(num % 2) {
            countOne++;
        } 
        else {
            countZero++;
        }
        num/=2;
    }
    return countOne == countZero;
}

void numbers(int num){
    int i=1;
    int count=0;
    while(count<num){
        if(zeroOne(i)) {
            cout << i << " ";
            count++;
        }
        i++;
    }
}

int main() {
    int n;
    cin >> n;
    while(n<=0){
        cout<<"Plese enter positive number: ";
        cin>>n;
    }
    numbers(n);
    return 0;
}