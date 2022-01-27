#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

class Prova {
	
	public:
		
	int codigo;
	
	float salario;
	
	string nome;
	
	Prova(int c, float s, string n) {
	}
	
	float calculaSalario (float s) {
		
		if (s > 3000) {
			s = (s*1.2);
		} else if (s > 2000) {
			s = (s*1.5);
		} else {
			s = (s*2);
		}
		
		return s;
	}
	
	void imprimiDados(int c, float s, string n) {
		
		cout << "Código: " << c << endl;
		cout << "Nome: " << n << endl;
		cout << "Salário: " << s << endl;
	}
};
int main(int argc, char** argv) {
	setlocale(LC_CTYPE, "portuguese_brazil");
	Prova prova1 (1, 1000, "Ana Paula");
	Prova prova2 (2, 5000, "Fernanda");

	prova1.imprimiDados(1, prova1.calculaSalario(1000), "Ana Paula");
	prova2.imprimiDados(2, prova2.calculaSalario(5000), "Fernanda");
	
	return 0;
}
