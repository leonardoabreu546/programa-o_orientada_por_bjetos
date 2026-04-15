#include <iostream>
using namespace std;

class aluno {
public:
    char nome_do_aluno[40] ; 
    int numero_do_aluno;
    float nota_1_teste;
    float nota_2_teste;
    float nota_final() {return (nota_1_teste+nota_2_teste)/2;}
};

int main() {   

    aluno a1;
    
    cout << "Introduza o nome do aluno: ";
    gets(a1.nome_do_aluno);

    cout << "Introduza o número do aluno: ";
    cin >> a1.numero_do_aluno;

    cout << "Introduza o nota do primeiro teste: ";
    cin >> a1.nota_1_teste;

    cout << "Introduza o nota do segundo teste: ";
    cin >> a1.nota_2_teste;

    system("cls"); 

    cout << "Nota do primeiro periodo de BP" << endl;
    cout << "Nome do aluno:" << a1.nome_do_aluno << "\t" << "Numero do aluno: " << a1.numero_do_aluno << endl;
    cout << "Nota final de BP:" << a1.nota_final();
    return 0;
}