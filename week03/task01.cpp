#include <iostream>
using namespace std;

//Да се пресметнат и отпечатат първите n члена на редицата ai = i^2 + 3i за въведено i.

int main() {
    int iter;
    cin>>iter;
    for(int i=0; i<=iter; i++){
        cout<< "a[" << i << "]=" << i*i + 3*i << endl;
    }
    return 0;
}