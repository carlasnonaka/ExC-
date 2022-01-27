#include <iostream>
 
using namespace std;

void vetorOrdenado (int vet[]) {
	int aux;
	for (int i=0; i<9; i++) {
        for (int j=i+1; j<10; j++) {
            if (vet[j]<vet[i]) {
                aux = vet[i];
                vet[i] = vet[j];
                vet[j] = aux;
            }
        }
    }
}

int buscaBinario (int vet[], int busca) {
	int inicio, fim, meio, achou;
	achou = 0;
	inicio = 0;
	fim = 9;
	meio = (inicio+fim)/2;
	while (inicio <= fim && achou == 0) 
	{
		if (vet[meio] == busca) 
		{
			achou = 1;
		}
		else 
		{
			if (busca < vet[meio] ) 
			{
				fim = meio - 1;
			}
			else 
			{
				inicio = meio+1;
			}
			meio = (inicio+fim)/2;
		}	
	}
	if (achou == 0) 
	{
		cout << "\nNúmero não foi encontrado no vetor";
	}
	else 
	{
		cout << "\nNúmero encontrado na " << meio+1 << "º posição do vetor."; 
	}
	}

int main(int argc, char** argv) {
    setlocale (LC_CTYPE, "portuguese_brazil");
    int i, j, vet[10], busca;
    
    for (i=0; i<10; i++) {
        cout << "Digite o " << i+1 << "º elemento do vetor: " << endl;
        cin >> vet[i];
    }
	vetorOrdenado (vet);
    cout << "\nVetor Ordenado: ";
    for (i=0; i<10; i++) {
        cout << vet[i] << " ";
    }
    
    cout<<"\nDigite o número a ser buscado no vetor : ";
	cin>>busca;
	
	buscaBinario(vet, busca);
	
    return 0;
}
