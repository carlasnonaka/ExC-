#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

int bissexto (int ano) {
		if (ano % 4 == 0 && !(ano % 100 == 0)||ano % 400 == 0) {
			return 1;
		} else {
			return 0;
		}
}
int main(int argc, char** argv) {
	setlocale (LC_CTYPE, "portuguese_brazil");
		int ano;
		cout << "\nDigite um ano: ";
		cin >> ano;
		
		cout << "\nO ano " << ano << (bissexto(ano) == 1 ? " é um ano bissexto." : " não é um ano bissexto.");
	return 0;
}
