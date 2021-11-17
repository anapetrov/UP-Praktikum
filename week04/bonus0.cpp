#include <iostream>
using std::cin;
using std::cout;
using std::endl;
//Да се напише програма, която след въвеждане на число, по голямо от 3 принтира диамант
//     *                                                                  
//    ***                                                                 
//   *****                                                                
//  *******                                                               
// *********                                                              
//  *******                                                               
//   *****                                                                
//    ***                                                                 
//     *   
int main() {
    int number;
    cin >> number;
    while (number <= 3) {
        cout << "Invalid input! Please enter bigger value: ";
        cin >> number;
    }
    for (int i = 0; i < number; i++) {
        for (int j = number; j > i; j--) {
            cout << " ";
        }
        for (int j = 0; j < i * 2 - 1; j++) {
            cout << "*";
        }
        cout << endl;
    }
    for (int i = 0; i < number; i++) {
        for (int j = 0; j < i; j++) {
            cout << " ";
        }
        for (int j = number * 2 - 1; j > i * 2; j--) {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}