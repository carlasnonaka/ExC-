#include <cstdlib>
#include <iostream>

using namespace std;

class PilhaDeArray
{
      private:
             int *VET;
             int ProximaPosicaoLivre;
             int MAX;
      public:
             PilhaDeArray(int qtde)
             {
                 MAX = qtde;
                 VET = new int[MAX];
                 ProximaPosicaoLivre = 0;
             }
             void Empilha(int n)
             {
                  if(ProximaPosicaoLivre < MAX) 
			VET[ProximaPosicaoLivre++] = n;
             }
             void Mostra()
             {
                  for(int i = 0; i<ProximaPosicaoLivre; i++)
                  {
                          cout <<VET[i] <<"\n";
                  }
             }
             int Desempilha()
             {
                  if(ProximaPosicaoLivre > 0) 
			return VET[--ProximaPosicaoLivre];
             }
};

int main(int argc, char *argv[])
{
    int vetor [8] = {1,1,2,3,5,8,13,21};
	PilhaDeArray pilha(50);
	
	for (int i=0; i<8; i++) {
		pilha.Empilha(vetor[i]);
	}
    pilha.Mostra();
    
    	for (int i=0; i<8; i++) {
		cout <<"\nDesempilha " <<pilha.Desempilha() <<".\n\n";
	}
	if (pilha.Desempilha() == 0) {
		cout << "SEQUENCIA DE FIBONACCI!" << endl;
	} else {
		cout << "NAO EH SEQUENCIA DE FIBONACCI!" << endl;
	}
    ;
    system("PAUSE");
    return EXIT_SUCCESS;
}
