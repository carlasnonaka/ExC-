#include <iostream>
#include <cstdlib>
#include <time.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

int main(int argc, char** argv) {
	setlocale (LC_CTYPE, "portuguese_brazil");
	srand(time(NULL));
	int matriz [6][6];
	int produto = 1;
	
	for (int i = 0; i < 6; i++) {
		for (int j = 0; j < 6; j++) {
		matriz [i][j] = 1 + (rand()%10);				
		}	
	}
	
	cout << "\n A matriz gerada foi: ";
	for (int i = 0; i < 6; i++) {
		cout << "\n";
		for (int j = 0; j < 6; j++) {
			cout << matriz [i][j] << "\t";				
		}	
	}
	
	cout << "\n Os elementos abaixo da diagonal principal são: ";
	for (int j = 0; j < 6; j++) {
		cout << "\n";
		for (int i = j+1; i < 6; i++) {
			cout << matriz [i][j] << "\t";
			produto = produto * matriz [i][j];				
		}	
	}
	
	cout << "\n O produto dos elementos abaixo da diagonal principal é: " << produto << endl;
	
	return 0;
}
