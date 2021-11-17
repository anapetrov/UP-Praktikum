#include <iostream>
using std::cin;
using std::cout;
using std::endl;
//Да се напише програма, която приема естествено число n и отпечатва следния пясъчен часовник:
/*
   *****
    * *
     *
    * *
   *****  
*/
int main() {
    int number;
    cin >> number;
    for (int i = 0; i < number - 1; i++) {
        cout << endl;
        for (int j = 0; j < i; j++) {
            cout << " ";
        }
        for (int j = number * 2 - 1; j > i * 2; j--) {
            if (i != 0 && (j == number * 2 - 1 || j == i * 2 + 1))  cout << "*";
            else if (i == 0) cout << "*";
            else cout << " ";
        }
    }
    for (int i = 0; i <= number; i++) {
        for (int j = number; j > i; j--) {
            if (i != 0) cout << " ";
        }
        for (int j = 0; j < i * 2 - 1; j++) {
            if (i != number && (j == 0 || j == i * 2 - 2))  cout << "*";
            else if (i == number) cout << "*";
            else cout << " ";
        }
        cout << endl;
    }
    return 0;
}
