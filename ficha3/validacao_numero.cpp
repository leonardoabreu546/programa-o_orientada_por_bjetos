#include <iostream>
using namespace std;

int main() {
   int numero;

   do{

        cout << "Introduza um número de 1 a 10: ";
        cin >> numero;

    if (numero < 1 || numero > 10){

        cout << "Número inválido. Tente novamente.";
    }
   } while (numero < 1 || numero > 10);

        cout << "Número válido: " << numero;
   
   return 0;
}