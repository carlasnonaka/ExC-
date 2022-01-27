#include <cstdlib>
#include <iostream>

using namespace std;

class PilhadeArray
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
             
               void insere(int n)
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
			 int retira(int qtde)
             {
                  if(ProximaPosicaoLivre > 0) 
					return VET[--ProximaPosicaoLivre];
             }
};

int main(int argc, char *argv[]) {
	
    PilhaDeArray Pilha(8);
    Pilha.insere (1);
    Pilha.insere(1);
    Pilha.insere(2);
    Pilha.insere(3);
    Pilha.insere(5);
    Pilha.insere(8);
    Pilha.insere(13);
    Pilha.insere(21);
    Pilha.Mostra();
    cout <<"\nDesempilha " <<Pilha.retira(21) <<".\n\n";
    cout <<"\nDesempilha " <<Pilha.retira(13) <<".\n\n";
    cout <<"\nDesempilha " <<Pilha.retira(8) <<".\n\n";
    cout <<"\nDesempilha " <<Pilha.retira(5) <<".\n\n";
    cout <<"\nDesempilha " <<Pilha.retira(3) <<".\n\n";
    cout <<"\nDesempilha " <<Pilha.retira(2) <<".\n\n";
    cout <<"\nDesempilha " <<Pilha.retira(1) <<".\n\n";
    cout <<"\nDesempilha " <<Pilha.retira(1) <<".\n\n";
    Pilha.Mostra();
    system("PAUSE");
    return EXIT_SUCCESS;
  }
