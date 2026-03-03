#include <iostream>
using namespace std;

int main() {
    float numero1, numero2;
    cout << "Digite o primeiro número: ";
    cin >> numero1;
    cout << "Digite o segundo número: ";
    cin >> numero2;

    cout << "Escolha o operador matemático (+, -, *, /): ";
    char operador;
    cin >> operador;

    float resultado;
    bool valido = true;

    switch (operador) {
        case '+':
            resultado = numero1 + numero2;
            break;
        case '-':
            resultado = numero1 - numero2;
            break;
        case '*':
            resultado = numero1 * numero2;
            break;
        case '/':
            if (numero2 != 0) {
                resultado = numero1 / numero2;
            } else {
                cout << "Erro: divisão por zero!" << endl;
                valido = false;
            }
            break;
        default:
            cout << "Operador inválido!" << endl;
            valido = false;
    }

    if (valido) {
        cout << "Resultado: " << resultado << endl;
    }
}