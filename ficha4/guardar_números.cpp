#include <iostream>
using namespace std;

int main() {
    string frutas[6];
    int contador = 1;
    
    while (contador<=6){
        cout << "Escreva a " << contador << "ª fruta";
        cin >> frutas[contador - 1];
        contador += 1;
    }
}