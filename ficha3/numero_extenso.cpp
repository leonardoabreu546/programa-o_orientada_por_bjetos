#include <iostream>
using namespace std;

int main() {
    int escolha;
    
    cout << "Escolha um número entre 0 e 3: ";
    cin >> escolha;
    
    switch(escolha){

        case 0:
        cout << "Zero";
        break;

        case 1:
        cout << "Um";
        break;

        case 2:
        cout << "Dois";
        break;

        case 3:
        cout << "Três";
        break;

        default:
        cout << "Número inválido!";
    }
    return 0;

}