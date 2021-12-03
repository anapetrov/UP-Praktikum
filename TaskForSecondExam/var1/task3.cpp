#include <iostream>
// Да се напише програма, която въвежда от клавиатурата цяло число n и масив от n цели числа. 
// Да се намери и изведе броя на тези числа в масива, чийто произведение от цифрите е едноцифрено число. 
// Ако няма такива да се изведе подходящо съобщение.
using std::cin;
using std::cout;
const int MAX_SIZE = 128;

void input(int array[], int size){
    for(int i = 0; i < size; i++){
        cin >> array[i];
    }
}

bool productIsDigit(int num){
    int product = 1;
    while(num){
        product *= (num % 10);
        num /= 10;
    }
    return product >= 0 && product <= 9;
}

void print(int array[], int size){
    for(int i=0; i < size; i++){
        if(productIsDigit(array[i])){
            cout << array[i] << " ";
        }
    }
}

int main() {
    int n;
    cin>>n;
    while(n <= 0 || n > MAX_SIZE){
        cout << "Plese enter another size of the array: ";
        cin >> n;
    }
    int array[MAX_SIZE];
    input(array, n);
    print(array, n);
    return 0;
}
