#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

int gababarito (char gabarito, int tam);
 
int main(int argc, char** argv) {
	setlocale (LC_CTYPE, "portuguese_brazil");
	
	char gabarito [10];
	
		cout << "\nDigite o gabarito oficial da prova: ";
	for (int i = 0; i < 10; i++) {
		cin >> gabarito[i];
	}
	
	cout << "Foram " << gabarito(gabarito, 10) << " acertos";
	
	return 0;
}

int gabarito (char gabarito[], int tam) {
	char resposta [10];
	int cont;
	cout << "\nDigite o gabarito do aluno: ";
	for (int i = 0; i < 10; i++) {
		cin >> resposta[i];
	}
	cout << "\nO gabarito do aluno é: ";
	for (int i = 0; i < 10; i++) {
		cout << resposta[i] << " ";
	}
	
	for (int i = 0; i < 10; i++) {
		if (gabarito [i] == resposta[i]) {
			cont = cont +1;
		} 	
	}
	return cont;
}
