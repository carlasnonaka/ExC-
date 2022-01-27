#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

int main(int argc, char** argv) {
	setlocale (LC_CTYPE, "portuguese_brazil");
	int i, j, aux, vetor[8];
	for (i=0; i<8; i++) {
		cout << "Digite o elemento do " << i+1 << "º vetor: " << endl;
		cin >> vetor[i];
	}
		cout << "Vetor Original: " << endl;
		for (i=0; i<8; i++) {
			cout << vetor[i] << " ";
		}
		for (i=0; i<7; i++) {
			for (j=1; j<8; j++) {
					if (vetor[i]>vetor[j]) {
					aux = vetor[i];
					vetor[i] = vetor[j];
					vetor[j] = aux;
				}
			}
			
		cout << "\nVetor Ordenado: " << endl;	
		for (i=0; i<8; i++) {
			cout << vetor[i] << " ";
		}
		
	}
	
	return 0;
}
