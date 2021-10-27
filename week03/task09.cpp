#include <iostream>
using namespace std;
// По дадено число N изкарайте на екрана квадрат от N x N символи, където по главния диагонал стоят нули, 
//над него +, а под него -.

// Пример:

// Вход:

// 4 Изход:

// 0+++
// -0++
// --0+
// ---0

int main() {
    int number;
    cin>>number;
    for(int i=0; i<number; i++){
       for(int j=0; j<number; j++){
           if(i==j) cout<<"0";
           else if(i<j) cout<<"+";
           else cout<<"-";
       }
       cout<<endl;
    }
    return 0;
}