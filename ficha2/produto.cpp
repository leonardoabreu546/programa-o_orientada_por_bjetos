#include <iostream>
using namespace std;

int main() {
    int numero1;
    int numero2;
    int produto;

    do {
        cout << "Digite o primeiro número:" << endl;
        cin >> numero1;

        cout << "Digite o segundo número:" << endl;
        cin >> numero2;

        produto = numero1 * numero2;

        cout << "O produto dos números é: " << produto << endl;

    } while (produto >= 10 && produto <= 1000);

    return 0;
}