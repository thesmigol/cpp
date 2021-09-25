#include <iostream>
#include <iomanip>
#include <math.h>
#include <string>
using namespace std;

int lerInt(){
    int inteiro;
    cin >> inteiro;
    return inteiro;
}

int validos(int x, int y){
return (x != y);
}

int cresc_descr(int x, int y){
    if(x < y){
    cout << "Crescente" << endl;
    } else {
        cout << "Decrescente" << endl;
    }
}


int main(void) 
{ 
	int x,y; 
	x = lerInt();
        y = lerInt(); 
	while ( validos(x,y) ) 
        {
		cresc_descr(x,y); 
		x = lerInt();
        	y = lerInt(); 
        }
	return 0; 
}