#include <iostream>
#include <conio.h>

using namespace std;

int main(int argc, char** argv) {
	setlocale (LC_CTYPE, "portuguese_brazil");
int X[10] , np, i, inicio, fim, meio, achou;
// carregando os n�meros no vetor - ORDENADOS
for (i=0; i<=9; i++) {
cout<<"\nDigite o "<<i + 1 <<"� n�mero : ";
cin>>X[i];
}
// digitando o n�mero a ser buscado no vetor
cout<<"\nDigite o n�mero a ser buscado no vetor : ";
cin>>np;
// buscando o n�mero digitado no vetor
achou = 0;
inicio = 0;
fim = 9;
meio = (inicio+fim)/2;
cout<< "\nO meio inicial �: " << meio;
while (inicio <= fim && achou == 0) {
if (X[meio] == np) {
	achou = 1;
	cout<< "\nO X[meio] �: " << X[meio] << ": " << np;
}
else {
	if (np < X[meio] ) {
	fim = meio - 1;
	cout<< "\ninicio: " << inicio << " meio " << meio << " fim " << fim;

}
	else {
	inicio = meio+1;
	cout<< "\ninicio2: " << inicio << " meio2: " << meio << " fim2: " << fim;
}
meio = (inicio+fim)/2;
}
}
if (achou == 0) {
	cout<<"\nN�mero n�o encontrado no vetor";
}
else {
	cout<<"\nN�mero encontrado na posi��o " <<meio+1;
}
return 0;
}

