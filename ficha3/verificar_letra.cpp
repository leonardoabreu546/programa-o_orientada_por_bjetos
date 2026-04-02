#include <iostream>
using namespace std;

int main() {
   char letra;

   cout << "Escreva uma letra: ";
   cin >> letra;

   if (islower(letra)) {
    cout << "A letra é minúscula";
   }

   else if (isupper(letra)) {
	cout << "A letra é maiúscula";
   }

   else
   cout << "Não é uma letra";
   
   
   
   return 0;
}