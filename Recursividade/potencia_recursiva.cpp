#include <iostream>

using namespace std;

int calcular(int b, int e)
{
    if(e == 0)
    {
        return 1;
    }

    if(e == 1)
    {
        return b;
    }
    return(b * calcular(b, e-1));
}

int main() {
    int base, potencia, resultado = 0;

    cout << "Digite a base: ";
    cin >> base;
    cout << "Digite a potencia: ";
    cin >> potencia;

    resultado = calcular(base, potencia);
    cout << "Resultado: " << resultado << endl;

    return 0;

}