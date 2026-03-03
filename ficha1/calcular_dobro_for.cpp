#include <iostream>
using namespace std;

int main() {
    int resultado = 0;
    for (int contador = 5; contador > 0; contador--) {
        resultado = contador * 2;
        cout << "O dobro de " << contador << " é: " << resultado << endl;
    }

    return 0;
}