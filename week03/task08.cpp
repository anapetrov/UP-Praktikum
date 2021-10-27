#include <iostream>
using namespace std;

//Изкарайте всички главни букви от английската азбука, които са съгласни.
int main() {
    for(int letter='A';letter<='Z';letter++){
        if(letter!='A'&& letter!='O' && letter!='U' && letter!='E' && letter!='I' && letter!='Y')
        cout<<(char)(letter)<<" ";
    }
    return 0;
}