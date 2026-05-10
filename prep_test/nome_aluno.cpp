using namespace std;
#include <iostream>;

class pessoa{
    private:
    string nome;

    public: 

    void setNome(string n){
        nome = n;
    }
    string getNome(){
        return nome;
    }
};

class aluno : public pessoa{

    private:
    float nota=15.5;

};

int main(){
    string nome;
    aluno a1;
    
    cout << "Digite o nome do aluno: ";
    cin >> nome;
    a1.setNome(nome);
    cout << a1.getNome();

    return 0;

}