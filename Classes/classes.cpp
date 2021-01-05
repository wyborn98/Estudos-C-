#include <string.h>
#include <iostream>
using namespace std;

class Pessoa {
    
public:
    char nome[100];
    char cpf[20];
    int idade;
};

int getIdade(Pessoa pessoas[], int tamanho, char nome[]) {    
    
    for(int i = 0; i < tamanho; i++) {
        
        if(strcmp(pessoas[i].nome, nome) == 0) {
            return pessoas[i].idade;
        }
        i++;
    }    

    return -1;
}

int main() {

    /*
    Pessoa p1;
    strcpy(p1.nome, "Vinicius");
    strcpy(p1.cpf, "0123456789");
    p1.idade = 22;

    cout << p1.nome << endl;
    cout << p1.cpf << endl;
    cout << p1.idade << endl;
    */

    Pessoa pessoas[3] = {

        {"Vinicius", "11988143900", 22},
        {"Pedro", "18916345200", 42},
        {"Maria", "98142335611", 19}      

    };

    cout << "Nome: " << pessoas[0].nome << endl;
    cout << "Nome: " << pessoas[1].nome << endl;
    cout << "Nome: " << pessoas[2].nome << endl;
    
    cout << "CPF: " << pessoas[0].cpf << endl;
    cout << "CPF: " << pessoas[1].cpf << endl;
    cout << "CPF: " << pessoas[2].cpf << endl;

    cout << getIdade(pessoas, 3, "Vinicius") << endl;

    return 0;
}
