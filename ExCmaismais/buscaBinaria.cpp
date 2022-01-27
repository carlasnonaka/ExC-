#include <iostream>
#include <conio.h>

using namespace std;

int main(int argc, char** argv) {
	setlocale (LC_CTYPE, "portuguese_brazil");
int X[10] , np, i, inicio, fim, meio, achou;
// carregando os números no vetor - ORDENADOS
for (i=0; i<=9; i++) {
cout<<"\nDigite o "<<i + 1 <<"º número : ";
cin>>X[i];
}
// digitando o número a ser buscado no vetor
cout<<"\nDigite o número a ser buscado no vetor : ";
cin>>np;
// buscando o número digitado no vetor
achou = 0;
inicio = 0;
fim = 9;
meio = (inicio+fim)/2;
cout<< "\nO meio inicial é: " << meio;
while (inicio <= fim && achou == 0) {
if (X[meio] == np) {
	achou = 1;
	cout<< "\nO X[meio] é: " << X[meio] << ": " << np;
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
	cout<<"\nNúmero não encontrado no vetor";
}
else {
	cout<<"\nNúmero encontrado na posição " <<meio+1;
}
return 0;
}

