#include <iostream>
using namespace std;

float calcularPerimetro(float comprimento, float largura) {
    return 2 * (comprimento + largura);
}

float calcularArea(float comprimento, float largura) {
    return comprimento * largura;
}

int main() {
    float comprimento, largura;

    cout << "Insira o comprimento: ";
    cin >> comprimento;

    cout << "Insira a largura: ";
    cin >> largura;

    cout << "\nPerímetro: " << calcularPerimetro(comprimento, largura) << endl;
    cout << "Área: " << calcularArea(comprimento, largura) << endl;

    return 0;
}