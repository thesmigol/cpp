#include <iostream>
#include <iomanip>
#include <math.h>
#include <string>
using namespace std;

int main() {

double A, B, C, kkkkkkkkkkk_OXI; // eu odeio abc
    cin >> A >> B >> C;
    kkkkkkkkkkk_OXI = ((pow(B,2) - 4*A*C) < 0 || 2*A == 0);
if(kkkkkkkkkkk_OXI)
    cout << "Impossivel calcular" << endl;
else{
    cout << fixed << setprecision(5);
    cout << "R1 = " << ((-B) + sqrt((pow(B,2) - 4*A*C)))/(2*A) << endl;
    cout << "R2 = " << ((-B) - sqrt((pow(B,2) - 4*A*C)))/(2*A) << endl;
    }
    
return 0;
}
