using namespace std;
#include <iostream>

int main(){

    int opcao;

    do {
        cout << "escolha 1" <<endl;
        cout << "escolha 2" <<endl;
        cout << "escolha 3" <<endl;
        cout << "escolha 0 para sair" <<endl;
        cout << "Escolha uma opcao: "; 
        cin >> opcao;

        switch(opcao){
            case 1:
                cout << "Voce escolheu a opcao 1!" << endl;
                break;

            case 2:
                cout << "Voce escolheu a opcao 2!" << endl;
                break;

            case 3:
                cout << "Voce escolheu a opcao 3!" << endl;
                break;

            case 0:
                cout << "A sair do programa..." << endl;
                break;

            default:
                cout << "Opcao invalida! Tenta novamente." << endl;
                break;
        }
    }
    while (opcao != 0);

    return 0;
}