#include <iostream>
using namespace std;

int multiplicar(int numeros[], int tamanho) {
    int resultado = 1;

    for (int i = 0; i < tamanho; i++) {
        resultado *= numeros[i];
    }

    return resultado;
}

int main() {
    int numeros[4];

    for (int i = 0; i < 4; i++) {
        cout << "Insira o " << i + 1 << "º número: ";
        cin >> numeros[i];
    }

    int resultado = multiplicar(numeros, 4);

    cout << "\nResultado da multiplicação: " << resultado << endl;

    return 0;
}

