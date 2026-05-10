#include <iostream>
using namespace std;

class circulo {
    private: 
    
    int raio=5;

    public:
    float circulo::getRaio() {
        return raio;
    }};


class cilindro : public circulo {
    private:
    int altura=10;

    public:
    float cilindro::getAltura() {
        return altura;
    }
    float cilindro::calcularVolume() {
        return 3.14 * getRaio() * getRaio() * getAltura();  
}
    
};

int main() {

    cilindro c1;

    cout << "Raio do circulo: " << c1.getRaio() << endl;
    cout << "Altura do cilindro: " << c1.getAltura() << endl;
    cout << "Volume do cilindro: " << c1.calcularVolume() << endl;

    return 0;
}