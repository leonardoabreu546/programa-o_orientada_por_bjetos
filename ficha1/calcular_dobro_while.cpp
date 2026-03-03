#include <iostream>
using namespace std;

int main() {
    int contador = 5;
    int resultado = 0;

    while (contador > 0) {
        resultado = contador * 2;
        cout << "O dobro de " << contador << " é: " << resultado << endl;
        contador--;
    }

    return 0;
}