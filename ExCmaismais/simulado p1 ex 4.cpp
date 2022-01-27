#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

void Bubblesort (int vetor[], int tam);

int main(int argc, char** argv) {
	setlocale (LC_CTYPE, "portuguese_brazil");
	
	int tam;
	
	cout << " Digite o tamanho do seu vetor: ";
	cin >> tam;
	
	int vetor[tam], i;

	for (i = 0; i < tam; i++) {
		cout << " Digite o " << i+1 << "° número do vetor: ";
		cin >> vetor[i];
	}
	
	cout << "\n O vetor digitado foi: ";
	for (i=0; i<tam; i++) {
		cout << vetor[i] << " ";	
	}
	
	Bubblesort (vetor, tam);
	
	cout << "\n O vetor ordenado com  o algoritmo Bubblesort: ";
	for (i=0; i<tam; i++) {
		cout << vetor [i] << " ";
	}
	
	return 0;
}

void Bubblesort (int vetor[], int tam) {
	
	int aux, qtevetor, posicaovetor;
	
	for (qtevetor = 1; qtevetor <= tam; qtevetor++) {
		for (posicaovetor = 0; posicaovetor < tam-1; posicaovetor++) {
			if (vetor[posicaovetor] > vetor[posicaovetor + 1]) {
				aux = vetor[posicaovetor];
				vetor[posicaovetor] = vetor[posicaovetor + 1];
				vetor[posicaovetor + 1] = aux;
			}
		}
	}
}
