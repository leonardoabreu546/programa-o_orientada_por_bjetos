#include <iostream>
using namespace std;

int main() {
    int nota;

    cout << "Introduza a nota (0 a 20): ";
    cin >> nota;

    if (nota < 0 || nota > 20) {
        cout << "Nota nao valida\n";
    }
    else if (nota < 10) {
        cout << "Reprovado\n";
    }
    else if (nota < 14) {
        cout << "Suficiente\n";
    }
    else if (nota < 18) {
        cout << "Bom\n";
    }
    else {
        cout << "Muito Bom\n";
    }

    return 0;
}