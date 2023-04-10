// Inserir Bibliotecas
#include <iostream>
using namespace std;

//abertura do código
int main() {
    {
        //declaração de variável
        int Var = 3;
        //declaração do ponteiro
        int* pVar;
        //valor da variável que o ponteiro vai buscar no endereço
        pVar = &Var;
        
        //interface do usuário com o valor da variável
        cout<<Var<<endl;
        //interface do usuário com o valor da variável que o ponteiro buscou
        cout<<*pVar<<endl;
        //endereço onde está armazenada a informação da variável
        cout<<pVar<<endl;
    }
    //retorna a zero
    return 0;
}