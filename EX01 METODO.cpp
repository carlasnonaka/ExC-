#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

int fahrenheit (float C) {
	float F;
	F = (C * 9 / 5) + 32;
	return F;
}

int celsius (float F) {
	float C;
	C = (F - 32) * 5/9;
	return C;
}
int main(int argc, char** argv) {
	setlocale (LC_CTYPE, "portuguese_brazil");
	
		int medida;
		int F, C;
	
		cout << "\nDigite 1 para digitar Fahrenheit ou 2 para digitar Celsius: ";
		cin >> medida;
		
		if (medida == 1) {
			cout << "\n Digite a temperatura em Fahrenheit: ";
			cin >> F;
			
			cout << "\nA transformação da temperatura em Celsius é " << celsius(F) << "°C";
		} 
		else if (medida == 2) {
			cout << "\n Digite a temperatura em Celsius: ";
			cin >> C;
			
			cout << "\nA transformação da temperatura em Fahrenheit é " << fahrenheit(C) << "°F";
		} 
		else {
			cout << "Número digitado é inválido!";
		} 
		return 0;
}
