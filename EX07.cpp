#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

int main(int argc, char** argv) {
	setlocale (LC_CTYPE, "portuguese_brazil");
	
	int i, vet1[7], vet2[7], vet4[7];
	char oper[4] = {'+','-','*','/'};
	
	cout << "\nDigite os elementos do primeiro vetor: ";
	for (i=0; i<7; i++) {
		cin >> vet1[i];
	}
	cout << "\nDigite os elementos do segundo vetor: ";
	for (i=0; i<7; i++) {
		cin >> vet2[i];
	}
	cout << "\nVetor 01: " << endl;
	for (i=0; i<7; i++) {
		cout << vet1[i] << " ";
	}
	
	cout << "\nVetor 02: " << endl;
	for (i=0; i<7; i++) {
		cout << vet2[i] << " ";
	}
	
	for (i=0; i<7; i++) {
	cout << "\nDigite qual operação deseja relaizar: (+, -, * ou /) no " << i+1 << "° elemento do vetor 4: ";
	cin >> oper[i];
			switch (oper[i]) {
				case '+': 
				vet4[i] = vet1[i] + vet2[i];
				break;
				case '-': 
				vet4[i] = vet1[i] - vet2[i];
				break;
				case '*': 
				vet4[i] = vet1[i] * vet2[i];
				break;
				case '/': 
				vet4[i] = vet1[i] - vet2[i];
				break;
				default:
					cout << "\nOpção Inválida! Tente novamente";
			}
		}
		
	cout << "\n O quarto vetor gerado foi:";
	for (i=0;i<7;i++) {
		cout << vet4[i] << " ";
	}
	return 0;

	}
	
	
	

