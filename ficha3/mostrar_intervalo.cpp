#include <iostream>
using namespace std;

int main() {
    int numero1, numero2;
    int menor, maior;

    cout << "Escolha um número: ";
    cin >> numero1;
    cout << "Escolha outro número: ";
    cin >> numero2;
    
    if (numero1 > numero2){
        menor = numero2;
        maior = numero1;
    }

    else {
        menor = numero1;
        maior = numero2;
    }

    cout << "Intervalo: " << endl;

    for (menor; menor<=maior; menor++){
        cout << menor << endl;
    }
    
    return 0;
}