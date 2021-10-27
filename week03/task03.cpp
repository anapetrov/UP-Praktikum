#include <iostream>
using namespace std;

//По въведено естествено число n изведете n-тото число от редицата на Фибоначи.

int main()  {
    long long number, help;
    long long fib=0; 
    long long previous=0;
    cin>>number;

    for(int i=0; i<number ; i++){
        if(i==0){
            previous=0;
            fib=0;
        }
        else if(i==1) {
            previous=fib;
            fib=1;
        };
        help=previous;
        previous=fib;
        fib= previous+help;
    }
    cout<<number<<"->"<<fib;
    return 0;
}
