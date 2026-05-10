#include <iostream>
using namespace std;

class veiculo{
    private:
    int id=101;

    public:

    int getId(){
        return id;
    }
};
class carro: public veiculo {
    public: 
    void buzinar(){
        cout << "Beep Beep!";
    }

};

int main(){
    carro c1;

    cout << "ID do carro: " << c1.getId() << endl;
    c1.buzinar();

    return 0;



}
