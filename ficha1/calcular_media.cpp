#include <iostream>
using namespace std;

int main() {
    float nota1, nota2;

    cout << "Digite a primeira nota: ";
    cin >> nota1;
    cout << "Digite a segunda nota: ";
    cin >> nota2;
    float media = (nota1 + nota2) / 2;
    cout << "A média das notas é: " << media << endl;
    if (media < 9.5) {
        cout << "Reprovado\n";
    }
    else if (media >= 9.5) {
        cout << "Aprovado\n";
    }
}