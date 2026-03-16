#include <iostream>
#include <string>
using namespace std;

int main() {
    string palavra = "bacalhau";
    string invertida = "";

    cout << "Palavra normal: " << palavra << endl;
    
    for (int i = palavra.length() - 1; i >= 0; i--) {
        invertida += palavra[i];
    }

    cout << "Palavra ao contrário: " << invertida << endl;

    return 0;
}