#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

bool positivoepar (int n);

int main(int argc, char** argv) {
	setlocale(LC_CTYPE, "portuguese_brazil");
	
	int n, cont;
	
	do {
		
		cout << "Digite um número: ";
		cin >> n;
		
		if (positivoepar(n) == true) {
			cont++;	
		}
		
	} while (positivoepar(n) == true);
	
	cout << " A quantidade de números digitados pares e maiores que zero foi: " << cont;
	return 0;
}

bool positivoepar (int n) {
	
	if (n>0 && n % 2 == 0) {
		return true;
	} else {
		return false;
	}
}
