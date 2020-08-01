#include <iostream>
#include <string.h>
using namespace std;
#define MAX 10


class Carro {

public:
    char nome[100];
    char cor[20];
    char placa[20];
    double preco;
};

//Ordenação utilizando o bubble sort
void ordena(Carro carros[], int tam) {
    
    Carro aux;

    for(int i = tam; i >= 0; i--){

        for(int j = 1; j <= i; j++){

            int res = strcmp(carros[j-1].nome, carros[j].nome);  

            if (res == 1) {
                
                aux = carros[j-1];
                carros[j-1] = carros[j];
                carros[j] = aux;
            }
            
        }
    }
}

int main() {

    Carro carros[MAX];
    int i = 0;
    char resp;
    
    while(true) {
        cout << "Digite o nome do carro: ";
        cin  >> carros[i].nome;
        cout << "Digite o preco: ";
        cin  >> carros[i].preco;        
        cout << "Voce deseja continuar? <S> SIM <N> NAO " << endl;
        cin  >> resp;
        if(resp != 'S' && resp != 's')
            break;
        cout << endl;
        i++;
        
    }

    cout << endl;
    cout << "Exibindo todos os carros:" << endl << endl;

    for(int j = 0; j <= i; j++) {
        cout << "Nome do carro: " << carros[j].nome << endl;
        cout << "Preco do carro: R$" << carros[j].preco << endl << endl;
    }

    ordena(carros, i);

    cout << "Exibindo os carros ordenados pelo nome: " << endl; 
    for(int j = 0; j <= i; j++) {
        cout << "Nome do carro: " << carros[j].nome << endl;
        cout << "Preco do carro: R$" << carros[j].preco << endl << endl;
    }


    return 0;
}