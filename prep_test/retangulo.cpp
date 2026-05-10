using namespace std;
#include <iostream>;

class retangulo{
    private:
    float larg;
    float alt;

    public:
    retangulo (float largura, float altura){
        larg=largura;
        alt=altura;
    }

    float calcularArea(){
        return larg * alt;
    }

};


int main(){
    float largura;
    float altura;
    retangulo a1(largura, altura);

    cout << "Introduza a largura" << endl;
    cin >> largura;
    cout << "Introduza a altura" << endl;
    cin >> altura;
    cout << a1.calcularArea() << endl;


    return 0;
}