#include <stdio.h>
#include <iostream>
#include <iomanip>
using namespace std;

int main() {

    int da_pra_ir_de_bike;
    double gasolina_ta_cara;

    cin >> da_pra_ir_de_bike;
    cin >> gasolina_ta_cara;
    cout << fixed << setprecision(3); 
    cout << (da_pra_ir_de_bike/gasolina_ta_cara) << " km/l" << endl;

    return 0;
}