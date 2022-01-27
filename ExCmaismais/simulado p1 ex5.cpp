#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;


void multiplicacao_vetores (int vet1[], int vet2[], int tam);

int main(int argc, char** argv) {
	setlocale (LC_CTYPE, "portuguese_brazil");
	
	int tam;
	
	cout << " Digite o tamanho dos vetores: ";
	cin >> tam;
	
	int i, vet1[tam], vet2[tam]; 
	
	for (i = 0; i < tam; i++) {
		cout << " Digite o " << i+1 << "° número do Primeiro Vetor: ";
		cin >> vet1[i];
		cout << " Digite o " << i+1 << "° número do Segundo Vetor: ";
		cin >> vet2[i];
	}
	
	multiplicacao_vetores(vet1, vet2, tam);
	
	return 0;
}

void multiplicacao_vetores (int vet1[], int vet2[], int tam) {
	
	int vet3[tam];
	
	for (int i = 0; i < tam; i++) {
		vet3[i] = vet1[i] * vet2[i]; 
	}
	
	cout << " O Terceiro Vetor originado a partir da multiplicação dos outros dois vetores: " << endl;
	for (int i = 0; i < tam; i++) {
		cout << " " << vet3[i] << " ";
	}	 
}
