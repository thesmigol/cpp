#include <stdio.h>
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {

    float a, b;
    double c, d; // to cansando de usar abc e xyz :(
    cin >> a;
    cin >> b;
    cin >> c;
    cin >> d;
    cout << fixed << setprecision(6) << "A = " << a << ", B = " << b << endl << "C = " << c << ", D = " << d << endl; 
    cout << fixed << setprecision(1) << "A = " << a << ", B = " << b << endl << "C = " << c << ", D = " << d << endl; 
    cout << fixed << setprecision(2) << "A = " << a << ", B = " << b << endl << "C = " << c << ", D = " << d << endl; 
    cout << fixed << setprecision(3) << "A = " << a << ", B = " << b << endl << "C = " << c << ", D = " << d << endl; 
    cout << fixed << setprecision(3) << scientific << uppercase << "A = " << a << ", B = " << b << endl << "C = " << c << ", D = " << d << endl; 
    cout << fixed << setprecision(0) << "A = " << a << ", B = " << b << endl << "C = " << c << ", D = " << d << endl; 
    return 0;
}   