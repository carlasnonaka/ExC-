#include <iostream>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

int main(int argc, char** argv) {
	setlocale (LC_CTYPE, "portuguese_brazil");
	double a, b, c, delta, x1, x2;
	cout << "Digite os três coeficientes de uma equação: " << endl;
	cin >> a >> b >> c;
	
	delta = (b*b) - (4*a*c);
	x1 = (-b) + sqrt(delta) / (2*a);
	x2 = (-b) - sqrt(delta) / (2*a);
	
	if (delta >= 0) {
		cout << " O valor de x' é: " << x1 << " e o valor de x'' é " << x2 << endl;
	} else {
		cout << " Não existem valores reais para x' e x'' ";
	}
	
	return 0;
}
