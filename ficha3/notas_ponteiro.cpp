#include <iostream>
using namespace std;

int main() {
    float notas[6];
    float *ptr = notas;

    for (int i = 0; i < 6; i++) {
        cout << "Introduza a " << i + 1 << "ª nota: ";
        cin >> *(ptr + i);
    }

    for (int i = 0; i < 6; i++) {
        cout << "Notas: " << *(ptr + i) << endl;
    }

    for (int i = 0; i < 6; i++) {
        cout << "Notas finais: " << *(ptr + i) + 1 << endl;
    }

}