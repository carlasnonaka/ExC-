#include <cstdlib>
#include <iostream>

using namespace std;

class ListaDeArray
{
      private:
             int *VET;
             int ProximaPosicaoLivre;
             int MAX;
      public:
             ListaDeArray(int qtde)
             {
                 MAX = qtde;
                 VET = new int[MAX];
                 ProximaPosicaoLivre = 0;
             }
             void insereInicio(int n)
             {		
                  if(ProximaPosicaoLivre < MAX) {
         
                  	for(int i =ProximaPosicaoLivre; i>=0; i--)
                  	{	  
						VET[i] = VET[i-1];
             		}
             		
					VET[0] = n;
					ProximaPosicaoLivre++;	
				  }
             }
               void insereFim(int n)
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
             int retiraInicio()
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
             int retiraFim()
             {
                  if(ProximaPosicaoLivre > 0) 
					return VET[--ProximaPosicaoLivre];
             }
};

int main(int argc, char *argv[])
{
    ListaDeArray Lista(50);
    Lista.insereInicio(3);
    Lista.insereFim(5);
    Lista.insereInicio(7);
    Lista.insereFim(1);
    Lista.Mostra();
    cout <<"\nDesempilha Inicio " <<Lista.retiraInicio() <<".\n\n";
    cout <<"\nDesempilha Fim " <<Lista.retiraFim() <<".\n\n";
    Lista.Mostra();
    system("PAUSE");
    return EXIT_SUCCESS;
}
