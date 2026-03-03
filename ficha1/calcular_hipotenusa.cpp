#include <iostream>
#include <cmath>
using namespace std;

int main() {
    float cateto1, cateto2, hipotenusa;
    cout << "Digite o valor do primeiro cateto: ";
    cin >> cateto1;
    cout << "Digite o valor do segundo cateto: ";
    cin >> cateto2;
    hipotenusa = sqrt(pow(cateto1, 2) + pow(cateto2, 2));
    cout << "O valor da hipotenusa é: " << hipotenusa << endl;
    return 0;
}