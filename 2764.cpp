#include <stdio.h>
#include <iostream>
#include <iomanip>
using namespace std;

int main() {

    int dia, mes, ano; // to cansando de usar abc e xyz :(

    cin >> dia;
    cin.ignore();
    cin >> mes;
    cin.ignore();
    cin >> ano;


    // zeros a esquerda
    cout << setw(2) << setfill('0') << mes << "/" << setw(2) << setfill('0') << dia << "/" << setw(2) << setfill('0') << ano << endl; 
    cout << setw(2) << setfill('0') << ano << "/" << setw(2) << setfill('0') << mes << "/" << setw(2) << setfill('0') << dia << endl;
    cout << setw(2) << setfill('0') << dia << "-" << setw(2) << setfill('0') << mes << "-" << setw(2) << setfill('0') << ano << endl;

    return 0;
}