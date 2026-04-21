#include <iostream>
using namespace std;

class rectang {
private:
    float comp;
    float larg;

public:
    rectang() {
        comp = 4;
        larg = 5;
    }

    float getComp() {
    return comp;
    }

    float getLarg() {
    return larg;
    }
};

class cubo : public rectang {
private:
    float altura;

public:
    cubo() {
        altura = 3;
    }

    float calcularVolume() {
    return getComp() * getLarg() * altura;
    }
};


int main() {   
    cubo meuCubo;
    cout << "Volume do cubo: " << meuCubo.calcularVolume() << endl;

    return 0;
}