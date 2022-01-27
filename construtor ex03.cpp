#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

class EntradaDeCinema {
	
	public:
		
	int diaFilme;
	float horario;
	int sala;
	float valor;
	
	EntradaDeCinema (int diaFilme, float horario, int sala, float valor) {
		
		this -> diaFilme = diaFilme;
		this -> horario = horario;
		this -> sala = sala;
		this -> valor = valor;
	}
	
	float CalculaDescontoMenor12 (int idade){
		if (idade < 12) {
		
			return (50/100*valor);
		}
	}
	
	float CalculaDescontoEstudante (int idade, bool estudante){
	if (estudante == true ) 
		{
			if (idade >=12 && idade <=15) 
			{
				return (valor - (40/100*valor));
			}
			else if (idade >=16 && idade <=20) 
			{
				return (valor - (30/100*valor));
			}
			else 
			{
				return (valor - (20/100*valor));
			}
		}
	}
	
	float CalculaDescontoHorario (float horario) {
		
		if (horario < 16) {
			return valor = (valor - (10/100*valor)); 
		}
	}
	
	void toString () {
		
		bool estudante;
		int idade;
		
		cout << "Digite sua idade: " << endl;
		cin >> idade;
		cout << "Digite 1 se for estudante e 0 se não for: " << endl;
		cin >> estudante;
		
		cout << "--------------------------------------------------------------" << endl;
		cout << " Dia do filme: " << diaFilme << endl;
		cout << " Horário do filme: " << horario << endl;
		cout << " Sala: " << sala << endl;
		
		if (idade < 12) {
		cout << " Valor: R$" << CalculaDescontoMenor12(idade) << endl;
		} else if (estudante == true) {
		cout << " Valor: R$" << CalculaDescontoEstudante (idade, estudante) << endl;
		} else if (horario < 16) {
		cout << " Valor: R$" << CalculaDescontoHorario(horario) << endl;
		} else {
		cout << " Valor: R$" << valor << endl;	
		}
		cout << "--------------------------------------------------------------" << endl;
	}
};

int main(int argc, char** argv) {
	setlocale(LC_CTYPE, "portuguese_brazil");
	int dia, sala, idade;
	float horario, valor;

	
	cout << "Digite o dia do filme: " << endl;
	cin >> dia;
	cout << "Digite o horário no formato de 24hr e com separador de . : " << endl;
	cin >> horario;
	cout << "Digite a sala: " << endl;
	cin >> sala;
	cout << "Digite o valor: " << endl;
	cin >> valor;
	
	
	EntradaDeCinema ingresso (dia, horario, sala, valor);
	
		ingresso.toString();
}

