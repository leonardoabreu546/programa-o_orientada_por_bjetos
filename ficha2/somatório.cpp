#include <iostream>
using namespace std;

int main() {
    int numero;
    int soma=0;

    cout << "Digite um número entre 1 e 15:" << endl;
    cin >> numero;

    do {
        cout << numero << endl;
        numero++;
        soma=soma+numero;
    } while (numero < 15);
    
    cout << "A soma dos números é: " << soma << endl;
    return 0;
}