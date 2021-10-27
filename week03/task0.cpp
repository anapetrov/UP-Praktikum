#include <iostream>
using namespace std;

//Да се пресметне n! за дадено n.

int main() {
    int n;
    int factorial=1;
    cin>>n;
    do {
        factorial *= n;
        n--;
    } while(n > 0);
    cout<<factorial;
    return 0;
}