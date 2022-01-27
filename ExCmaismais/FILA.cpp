#include <cstdlib>
#include <iostream>

using namespace std;

class FilaDeArray
{
      private:
             int *VET;
             int ProximaPosicaoLivre;
             int MAX;
      public:
             FilaDeArray(int qtde)
             {
                 MAX = qtde;
                 VET = new int[MAX];
                 ProximaPosicaoLivre = 0;
             }
             void Entrar(int n)
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
             int Sair()
             {	
                  if(ProximaPosicaoLivre > 0) 
                { 	
                	int valorSaiu = VET[0];
					for(int i = 1; i<ProximaPosicaoLivre; i++)
                  	{	   
						VET[i-1] = VET[i];

             		}
             		
             		ProximaPosicaoLivre--;
             		return valorSaiu;
             	}
			}
};

int main(int argc, char *argv[])
{
    FilaDeArray fila(50);
    fila.Entrar(3);
    fila.Entrar(5);
    fila.Entrar(7);
    fila.Entrar(1);
    fila.Mostra();
    cout <<"\nSair da fila " <<fila.Sair() <<".\n\n";
    cout <<"\nSair da fila " <<fila.Sair() <<".\n\n";
    fila.Mostra();
    system("PAUSE");
    return EXIT_SUCCESS;
}

