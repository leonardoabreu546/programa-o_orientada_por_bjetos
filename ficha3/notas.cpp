#include <iostream>
using namespace std;

int main() {
    float notas[6];

    for (int i = 0; i < 6; i++) {
        cout << "Introduza a " << i + 1 << "ª nota: ";
        cin >> notas[i];
    }

    for (int i = 0; i < 6; i++) {
        cout << "Notas: " << notas[i] << endl;
    }

    for (int i = 0; i < 6; i++) {
        cout << "Notas finais: " << notas[i] + 1 << endl;
    }

    return 0;
}