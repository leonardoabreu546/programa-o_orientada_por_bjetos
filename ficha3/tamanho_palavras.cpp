#include <iostream>
#include <string>
using namespace std;

int main() {
    string palavra1, palavra2;
    cout << "Introduza uma palavra: ";
    cin >> palavra1;
    cout << "Introduza outra palavra: ";
    cin >> palavra2;

    if (palavra1 == palavra2)
        cout << "As palavras são iguais." << endl;
    
    else {
        if (palavra1.length() > palavra2.length()) {
            cout << palavra1 << " é a palavra maior." << endl;
        }
        else if (palavra1.length() < palavra2.length()) {
            cout << palavra2 << " é a palavra maior." << endl;
        }
        else {
            cout << "As palavras têm o mesmo tamanho." << endl;
        }
    }

    return 0;
}