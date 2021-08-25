#include <stdio.h>
#include <iostream>
#include <iomanip>
#include <math.h>
#include <string>
using namespace std;

int main() {

    int a;
	float b;
	char c;
	string d;

    cin >> a;
    cin >> b;
    cin.ignore();
    cin >> c;
    cin.ignore();
    getline(cin,d);

    cout << a << b << c << d << endl;
    cout << a << "\t" << b << "\t" << c << "\t" << d << endl;
    cout << setw(10) << a << setw(10) << b << setw(10) << c << setw(10) << d << endl;
    

    
    

    return 0;
}