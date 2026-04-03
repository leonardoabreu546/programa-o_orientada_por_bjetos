#include <iostream>
using namespace std;

int main() {
    int numero;

    cout << "Escolha um número inteiro: ";
    cin >> numero;
    cout << "Ordem crescente" << endl;

    for (int i=0; i<=numero; i++){
        cout << i << endl;
    }

    cout << "Ordem crescente" << endl;

    while (numero>=0){
        cout << numero << endl;
        numero = numero - 1;
    }

    return 0;
}