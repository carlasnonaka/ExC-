#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
 
 using namespace std;
 
int main(int argc, char** argv) {
	setlocale (LC_CTYPE, "portuguese_brazil");
	int a = 1;
	int b = 2;
	int c = 3;
	int *pt1, *pt2, *pt3, *vaux;
	int vetor[10] = {0, 10, 20, 30, 40, 50, 60, 70, 80, 90};
	
	//-	Atribuir o pt1 ao endere�o de mem�ria de a, pt2 ao de b e pt3 ao de c;
	pt1 = &a;
	pt2 = &b;
	pt3 = &c;
	
	//-	Exiba na tela o endere�o de mem�ria de a e o do ponteiro  pt1;
	cout << "O endere�o de mem�ria de a �: " << &a << endl;
	cout << "O endere�o de mem�ria de pt1 �: " << pt1 << endl;
	
	//-	Exiba na tela o valor da vari�vel apontada por  pt1;
	cout << "O valor da vari�vel apontada por pt1 �: " << *pt1 << endl;
	
	/*-	Atribuir o valor do endere�o de mem�ria da posi��o 1 do vetor j� criado para o ponteiro vaux e 
	 * exibir na tela o valor da vari�vel apontada pelo ponteiro;*/
	 
	vaux = &vetor[1];
	cout << "O valor da vari�vel apontada por vaux �: " << *vaux << endl;
	
	/*-	Agora varra o vetor de 2 em 2 a partir da posi��o 1 (ex. 1,3,5,7,9) e 
	 * acrescente o valor de + 10 em cada posi��o, exibir na tela os valores dos vetores criados acima.
     * Ex. v[1] = 20, v[3] = 40... */
     
     for (int i = 1; i<10; i=i+2) {
     	
     	 vaux = &vetor[i];
		 cout << "vetor[" << i << "] = " << (*vaux+10) << "  ";
	 }

	return 0;
}
