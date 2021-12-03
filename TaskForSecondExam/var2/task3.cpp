#include <iostream> 
// Да се напише програма, която въвежда от клавиатурата цяло число n и символен масив от n елемента. 
// Намерете сумите от ASCII кодовете на елементите от четни и нечетни позиции и сравнете двете суми. 
// Проверете дали по-голямата сума е делител на по-малката и изведете подходящо съобщение.
using std::cin;
using std::cout;
using std::boolalpha;
const int MAX_SIZE = 128;

void input(char array[], int size){
    char c;
    for(int i = 0; i < size; i++){
        c = cin.get();
        array[i] = c;
    }
    array[size] = '\0';
}

void ascii(char array[], int size){
    for(int i = 0; i < size; i++){
        cout << i << " -> ";
        cout << (int)array[i];
        cout << '\n';    
    }
}

bool divider(char array[], int size){
    int sumOdd = 0, sumEven = 0;
    for(int i = 0; i < size; i++){
        if(i & 1) {
            sumOdd += (int)array[i];
        }
        else {
            sumEven += (int)array[i];
        }
    }
    return sumOdd > sumEven ? sumOdd % sumEven : sumEven % sumOdd;
}

int main() {
    int n; 
    cin >> n;
    char array[MAX_SIZE];
    cin.ignore();
    input(array, n);
    ascii(array, n);
    cout << boolalpha << !divider(array, n);
    return 0;
}