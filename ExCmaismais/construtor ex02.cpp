#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

class comparavel {
	
	public:
		
	int num;
	
 comparavel () {
		num = 10;
}
	

	bool ehMaiorouIgual (int num2) {
		if (num >= num2)
{
     return true;
}
  else 
{
		return false;
}
	}
	
	bool ehMenorouIgual (int num2) {
		if (num <= num2)
{
     return true;
}
  else 
{
		return false;
}

	}
	
	bool ehDiferentede (int num2) {
		if (num != num2)
{
     return true;
}
  else 
{
		return false;
}

	}
	

};

int main(int argc, char** argv) {
	setlocale(LC_CTYPE, "portuguese_brazil");
	int num2;
	comparavel comp;
	
cout << "Digite um n�mero a ser comparado: ";
cin >> num2;


	cout << "O n�mero " << comp.comparavel() << " � maior ou igual a " << num2 << ": " << comp.ehMaiorouIgual(num2)<< endl;

 cout << "O n�mero " << comparavel.comparavel() << " � menor ou igual a " << num2 << ": " << comp.ehMenorouIgual(num2)<< endl;

	cout << "O n�mero " << comparavel.comparavel() << " � diferente de " << num2 << ": " << comp.ehDiferentede(num2)<< endl;

	return 0;
}
