#include <iostream>
using namespace std;

int main() {
    float numero1, numero2;

    cout << "Digite o primeiro número: ";
    cin >> numero1;

    cout << "Digite o segundo número: ";
    cin >> numero2;

    if (numero1 > numero2) {
        cout << "O maior número é: " << numero1 << endl;
    }
    else if (numero2 > numero1) {
        cout << "O maior número é: " << numero2 << endl;
    }
    else {
        cout << "Os números são iguais." << endl;
    }

    return 0;
}