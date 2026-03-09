#include <iostream>
using namespace std;

int main() {
    int numero;
    cout << "Digite um número entre 1 e 15:" << endl;
    cin >> numero;
    while (numero<15) {
        cout << numero << endl;
        numero++;
    }   
}

