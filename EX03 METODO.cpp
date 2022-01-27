#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

int primo (int numero) {
	
	int div = 0;
	
	for (int i = numero; i>0; i--) {
		if (numero % i == 0) {
			div = div + 1;
		}	
	}
	if (div == 2) {
			return 1;
		}
		else {
			return 0;
		}	
}

int main(int argc, char** argv) {
		setlocale (LC_CTYPE, "portuguese_brazil");
		
		int numero;
		
		cout << "\nDigite um número: ";
		cin >> numero;
		
		cout << (primo(numero) == 1 ? "É primo!" : "Não é Primo!");
	return 0;
}
