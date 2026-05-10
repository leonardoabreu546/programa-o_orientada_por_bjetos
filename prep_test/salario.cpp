using namespace std;
#include <iostream>;

class funcionario{
    private:
    float salarioBase;

    public:

    float getSalario(){
    return salarioBase;
    }

    // SET deve de ser com void
    void setSalario(float salario){
        salarioBase = salario;
    }
};

class gerente : public funcionario{
    public:
    void mostrarSalarioFinal(){
        float total=getSalario()+500;
        cout << "O salario final com bonus e: " << total << endl;
    };
};

int main(){
    float salario;
    gerente s1;
    cout << "Introduza o seu salário: ";
    cin >> salario;
    s1.setSalario(salario);
    s1.mostrarSalarioFinal();

    return 0;
}