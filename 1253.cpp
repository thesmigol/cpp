#include <iostream>
#include <iomanip>
#include <math.h>
#include <string>
using namespace std;
int main(void) 
{ 
	int n,i;
	char frase[2000];
	int deslocamento;
	
	ler(n);//passagem por referencia
	for ( i=0; i<n; i=i+1 ){
	        lerString(frase,2000);
		ler(deslocamento);
		caesar(frase, deslocamento);
		cout << frase << endl;
	}
	return 0;
}