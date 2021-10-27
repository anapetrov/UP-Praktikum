#include <iostream>
using namespace std;

// По дадено естествено число определете дали то е просто.

// Пример:

// Вход: 8

// Изход: NO

// Вход: 7

// Изход: YES

int main() {
    int number;
    bool flag=true;
    cin>>number;
    for(int i=number-1; i>1; i--){
        if(number%i==0) flag=false;
    }
    if(!flag) cout<<"NO";
    else cout<<"YES";
    return 0;
}