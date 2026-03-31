#include <iostream>
using namespace std;

    
void juntar (string frase1, string frase2){
    cout << frase1 + frase2;
}
    

int main() {
    string str1, str2;
    cout << "Digite a primeira frase: ";
    cin >> str1;
    cout << "Digite a primeira frase: ";
    cin >> str2;

    juntar(str1, str2);

    return 0;

}