#include <iostream>
using namespace std;

int main() {
    int notas[6] = {12, 15, 10, 18, 14, 16};

    for (int i = 0; i < 6; i++) {
        cout <<"Notas: " << notas[i] << endl;
    }

    for (int i = 0; i < 6; i++) {
        cout << "Notas finais: " << notas[i] + 1 << endl;
    }

    return 0;
}