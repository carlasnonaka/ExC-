#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

bool ehprimo (int n);

int main(int argc, char** argv) {
	setlocale (LC_CTYPE, "portuguese_brazil");
	int n;
	
	cout << "Digite um número: ";
	cin >> n;
	
	cout << (ehprimo (n) == true ? "O número é Primo!" : "O número não é Primo!");
	return 0;
}

bool ehprimo (int n) {
	
	int div = 0;
	
	for (int i = 1; i <= n; i++) {
		if (n % i == 0) {
			div++;	
		}
	}
		
	if (div == 2){
		return true;
	} else {
		return false;
	}
}
