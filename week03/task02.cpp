#include <iostream>
using namespace std;

//Да се напише програма, която чете от клавиатурата n числа и извежда най-голямото отрицателно число.

int main() {
    int n;
    int maxNegative=0;
    int maxPositive=0;
    int temp;
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>temp;
        if(temp<0){
            if(maxNegative==0) maxNegative=temp;
            else if(maxNegative<temp) maxNegative=temp;
        } else {
            if(maxPositive==0) maxPositive=temp;
            else if(maxPositive<temp) maxPositive=temp;
        }
    }
    if(maxNegative==0) cout<<maxPositive;
    else cout<<maxNegative;
    return 0;
    
}