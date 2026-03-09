#include <iostream>
#include <string>
using namespace std;

int main() {
    string senha;
    string tentativa;

    cout << "Defina a senha: ";
    cin >> senha;

    do {
        cout << "Digite a senha: ";
        cin >> tentativa;

        if (tentativa != senha) {
            cout << "Senha incorreta!" << endl;
            cout << "PISTA: A senha tem " << senha.length()
                 << " letras e começa com '" << senha[0] << "'" << endl;
        }

    } while (tentativa != senha);

    cout << "Parabéns! Você acertou a senha!" << endl;

    return 0;
}