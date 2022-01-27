#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

int main(int argc, char** argv) {
	setlocale (LC_CTYPE, "portuguese_brazil");
	int soma;
	int mat [4][4];
	
	cout << "\n Digite os elementos da matriz: " << endl;
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++){
			cin >> mat[i][j];
		}
	}
	cout << "\n Matriz gerada: " << endl;
		for (int i = 0; i < 4; i++) {
			cout << "\n";
		for (int j = 0; j < 4; j++){
			cout << mat [i][j]<<"\t";
		}
	}
	
	
		for (int i = 0; i < 4; i++) {
		soma = soma + mat [i][i];
		}
		cout << "\n A soma da diagonal principal é: " << soma << endl;
	
	return 0;
}
