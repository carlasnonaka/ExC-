#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

int fibonacci (int F);

int main(int argc, char** argv) {
	setlocale (LC_CTYPE, "portuguese_brazil");
	int T;
	cout <<"\nDigite quantos termos deseja ver de Fibonacci: ";
	cin >> T;
	cout << "\nA sequência de Fibonacci é: ";
	for (int i = 1; i <= T; i++) {
		cout << fibonacci (i) << "  ";
	}
	return 0;
}

int fibonacci (int F) {
	if (F <= 2) {
		return 1; 
	} else {
		return fibonacci (F-1) + fibonacci (F-2);
	}
	
	
}
