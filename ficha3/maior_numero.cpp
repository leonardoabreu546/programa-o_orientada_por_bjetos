#include <iostream>
using namespace std;

int main() {
    int numeros[3];

    for (int i = 0; i < 3; i++) {
        cout << "Introduza o " << i + 1 << "º número: ";
        cin >> numeros[i];
    }

    int maior = numeros[0];

    for (int i = 1; i <3; i++){
        if (numeros[i] > maior){
            maior = numeros[i];
        }
    }

    cout << "O maior número é: " << maior; 

    return 0;

}