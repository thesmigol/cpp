#include <stdio.h>
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {

    string a, b, c; // to cansando de usar abc e xyz :(
    cin >> a;
    cin >> b;
    cin >> c;
    cout << "A = " << a << ", B = " << b << ", C = " << c << endl;
    cout << "A = " << b << ", B = " << c << ", C = " << a << endl;
    cout << "A = " << c << ", B = " << a << ", C = " << b << endl;
    return 0;
}