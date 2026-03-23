#include <iostream>
using namespace std;

int contarPositivos(int numeros[], int tamanho) {
    int total = 0;

    for (int i = 0; i < tamanho; i++) {
        if (numeros[i] > 0) {
            total++;
        }
    }

    return total;
}

int main() {
    int numeros[5];

    for (int i = 0; i < 5; i++) {
        cout << "Insira o " << i + 1 << "º número: ";
        cin >> numeros[i];
    }

    int resultado = contarPositivos(numeros, 5);

    cout << "\nNúmeros positivos: " << resultado << endl;

    return 0;
}