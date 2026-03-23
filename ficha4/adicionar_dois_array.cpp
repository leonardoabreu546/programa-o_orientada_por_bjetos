#include <iostream>
using namespace std;

void adicionarDois(int numeros[], int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        numeros[i] += 2;
    }
}

int main() {
    int numeros[6] = {3, 7, 1, 9, 4, 6};

    cout << "Antes:" << endl;
    for (int i = 0; i < 6; i++) {
        cout << numeros[i] << " ";
    }

    adicionarDois(numeros, 6);

    cout << "\n\nDepois:" << endl;
    for (int i = 0; i < 6; i++) {
        cout << numeros[i] << " ";
    }

    cout << endl;
    return 0;
}