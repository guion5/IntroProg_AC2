//incluir bibliotecas
#include <iostream>
using namespace std;

//abertura do código
int main() {
    {
        //declaração do ponteiro como nova variável
        int *ptr = new int;
        //valor declarado para a variável
        *ptr = 7;
        
        //interface do usuário com o valor declarado
        cout<< *ptr<<endl;
        //interface do usuário com o endereço da variável
        cout<< ptr<<endl;
        
        //comando para destruir o ponteiro
        delete ptr;
        //comando para destruir o local de armazenamento da variável
        ptr = nullptr;
        
        //interface do usuário com info de falha (ponteiro não encontrado)
        cout<<*ptr<<endl;
        //interface do usuário com info de falha (ponteiro não encontrado)
        cout<<ptr<<endl;
    }
    //retorna a zero
    return 0;
}