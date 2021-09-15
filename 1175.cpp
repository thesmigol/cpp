#include <iostream>
#include <iomanip>
#include <math.h>
#include <string>
using namespace std;

int main() {
    int N[20], ENTRADA, SELETOR;
    int i, o;
    ENTRADA = 0;
    while(cin >> N[ENTRADA]){
    ENTRADA++;
}
    ENTRADA = 0;
    for(int i = 19; i >= 10; i--){
    SELETOR = N[i];
    N[i] = N[ENTRADA];
    N[ENTRADA] = SELETOR;
    ENTRADA++;
}
    for(int o = 0; o < 20; o++){
    cout << "N[" << o << "] = " << N[o] << endl;
}
return 0;
}
