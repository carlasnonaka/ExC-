#include <iostream>
#include <cstdlib>
#include <time.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

int main(int argc, char** argv) {
	setlocale (LC_CTYPE, "portuguese_brazil");
	srand(time(NULL));
	int matriz [6][6];
	
	for (int i = 0; i < 6; i++) {
		for (int j = 0; j < 6; j++) {
		matriz [i][j] = rand()%10;				
		}	
	}
	
	cout << "\n A matriz gerada foi: ";
	for (int i = 0; i < 6; i++) {
		cout << "\n";
		for (int j = 0; j < 6; j++) {
			cout << matriz [i][j] << "\t";				
		}	
	}
	
	cout << "\n O elementos abaixo da diagonal principal é: ";
	for (int j = 0; j < 6; j++) {
		cout << "\n";
		for (int i = j+1; i < 6; i++) {
			cout << matriz [i][j] << "\t";				
		}	
	}
		
	return 0;
}
