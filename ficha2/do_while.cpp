#include <iostream>
using namespace std;

int main() {
    int numero;

    cout << "Digite um número entre 1 e 15:" << endl;
    cin >> numero;

    do {
        cout << numero << endl;
        numero++;
    } while (numero < 15);

    return 0;
}