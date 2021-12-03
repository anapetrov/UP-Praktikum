#include <iostream>
// Да се напише програма, която въвежда от клавиатурата 2 низа. Да се
// изведе на монитора колко пъти втория низ се среща в първия. Вторият низ
// задължително е по-къс от първия.
using std::cin;
using std::cout;
const int MAX_SIZE = 128;

int len(char str[]) {
    int len = 0;
    while (str[len]) {
        len++;
    }
    return len;
}

bool check(char str1[], char str2[]) {
    int len1 = len(str1), len2 = len(str2);
    return len1 >= len2;
}

int countOfString(char str1[], char str2[]) {
    int count = 0;
    int helpCount = 0;
    int len1 = len(str1), len2 = len(str2);
    int j = 0;
    for (int i = 0; i < len1 && len1 - j >= len2; i++) {
        helpCount = 0;
        for (int j = 0; j < len2; j++) {
            if (str1[i] == str2[j]) {
                helpCount++;
                i++;
            }
            else if (str1[i] != str2[j] && str1[i] == str2[0]) {
                helpCount = 0;
                j = -1;
            }
            else if (str1[i] != str2[j]) {
                helpCount = 0;
                i++;
            }
        }
        if (helpCount == len2) {
            count++; 
        }
        i--;
    }
    return count;
}

int main() {
    char string1[MAX_SIZE], string2[MAX_SIZE];
    cin >> string1 >> string2;
    while (!check(string1, string2)) {
        cout << "The second string is bigger than the first! Please enter another second string: ";
        cin >> string2;
    }

    cout << countOfString(string1, string2);
    return 0;
}
