#include <iostream>
using namespace std;

int main() {
    int stock = 10; // Comecei com 10 como o desafio pedia
    int opcao;

    do {
        cout << "\n--- MENU DE STOCK ---" << endl;
        cout << "1: Adicionar 1 ao stock" << endl;
        cout << "2: Remover 1 do stock" << endl;
        cout << "3: Mostrar stock atual" << endl;
        cout << "0: Sair" << endl; // Usei o 0 como sugerido no desafio
        cout << "Escolha uma opcao: ";
        cin >> opcao;

        switch(opcao) {

            case 1:
                stock++;
                cout << "Item adicionado! Stock: " << stock << endl;
                break;

            case 2:
                if (stock > 0) {
                    stock--;
                    cout << "Item removido! Stock: " << stock << endl;
                } else {
                    cout << "Erro: Stock vazio!" << endl;
                }
                break;

            case 3:
                cout << "Stock disponivel: " << stock << endl;
                break;

            case 0:
                cout << "A sair do programa..." << endl;
                break;
                
            default:
                cout << "Opcao invalida! Tenta novamente." << endl;
                break;
        }
    } while (opcao != 0);

    return 0;
}