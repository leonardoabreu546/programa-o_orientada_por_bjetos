using namespace std;
#include <iostream>

int main(){
    int valores[5] = {10, 20, 30, 40, 50};

    int* ptr = valores;

    for (int i = 0; i<5; i++){
        cout << "Valor: " << *(ptr+i) << endl;
    }

    for (int i = 0; i<5; i+=2){
        cout << "Valor dos indices pares: " << *(ptr+i) << endl;
    }

    return 0;
}