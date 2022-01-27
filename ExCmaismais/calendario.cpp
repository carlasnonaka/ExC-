g#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

 using namespace std;
 
 class calendario {
 
 public:
 
 int mes; 
 int ano;
 
 	calendario (int mes, int ano) {
 	
		this->mes = mes;
		this->ano = ano;
	}
	
	bool Bissexto (int ano) {
		
		if( ( (ano % 4 == 0) && (ano % 100 != 0) ) || (ano % 400 == 0) )
        return true;
    	else
        return false;

	}
	
	int DiaDaSemana (int dia, int mes, int ano) {
		
		int f = ano + dia + 3 * (mes - 1) - 1;
			
		if (mes < 3) ano--;
  
		else f -= int(0.4 * mes + 2.3);
   			
		f += int (ano / 4) - int ((ano / 100 + 1) * 0.75);
  
   		f %= 7;
   
   		return f+1;

	}
	
	void imprimirCalendario () {
		
		cout <<"DOM\tSEG\tTER\tQUA\tQUI\tSEX\tSAB\n\n";
		
		short TamanhoDoMes[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
  
  			if (Bissexto(ano) == true){
  				
				  TamanhoDoMes[1] = 29;
  				
			  } 
  
  			for(int j = 1; j < DiaDaSemana(1, mes, ano); j++) cout <<'\t';
  
  			for(int dia = 1; dia <= TamanhoDoMes[mes - 1]; dia++){
  				
    			if(dia < 10) cout << '0' <<dia <<'\t';
    
				else cout <<dia <<'\t';
    			
				if(DiaDaSemana(dia, mes, ano) == 7) cout <<'\n';

			}
		}
	
	
 };
 
int main(int argc, char** argv) {
	setlocale (LC_CTYPE, "portuguese_brazil");
	
	int mes, ano;
	
	cout << "Digite o mês e ano para exibir o calendário: " << endl;
	cin >> mes >> ano;
	
	calendario obj (mes, ano);
	
	obj.imprimirCalendario();
	
	return 0;
}
