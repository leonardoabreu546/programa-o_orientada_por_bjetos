#include <iostream>
#include <string>
using namespace std;

void concatenar(string str1, string str2) {
    cout << "Resultado: " << str1 + str2 << endl;
}

int main() {
    string frase1, frase2;

    cout << "Escreva a primeira frase:";
    cin >> frase1;
    cout << "Escreva a segunda frase:";
    cin >> frase2;

    concatenar(frase1, frase2);

    return 0;
}
    