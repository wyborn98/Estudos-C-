#include <iostream>
using namespace std;

int my_strlen(char *str) {
    int tam = 0;

    while(*str != '\0'){
        *str++;
        tam++;
    }

    return tam;
}

char *my_strcat(char *dest, char *orig) {
    
    char *resultado = NULL;
    int tam_dest = my_strlen(dest);
    int tam_orig = my_strlen(orig);

    resultado = new char[tam_dest + tam_orig];
    char *p_str = resultado;

    while(*dest != '\0'){
        *p_str = *dest;
        p_str++;
        dest++;
    }

    while(*orig != '\0'){
        *p_str = *orig;
        p_str++;
        orig++;
    }

    *p_str = '\0';

    return resultado;
}

int main() {

    char *nome1 = new char[100];
    char *nome2 = new char[100];
    
    cout << "Digite o primeiro nome: ";
    cin >> nome1;
    cout << "Digite o segundo nome: ";
    cin >> nome2;    

    char *resultado = my_strcat(nome1, nome2);

    cout << "Resultado: " << my_strcat(nome1, nome2) << endl;
    
    return 0;
}