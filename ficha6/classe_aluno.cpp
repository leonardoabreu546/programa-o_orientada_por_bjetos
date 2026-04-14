#include <iostream>
using namespace std;

class aluno {
public:
    char nome_do_aluno[40] ; 
    int numero_do_aluno; 
    float nota_esperada;

};

int main() {   

    aluno a1;
    
    cout << "Introduza o nome do aluno: ";
    gets(a1.nome_do_aluno);

    cout << "Introduza o número do aluno: ";
    cin >> a1.numero_do_aluno;

    cout  << "Introduza a nota esperada: ";
    cin >> a1.nota_esperada;

    system("cls");

    cout << "Prognosticos de BP." << endl;
    cout << "Nome do aluno: " << a1.nome_do_aluno << "\t" << "Numero do aluno: " << a1.numero_do_aluno << endl;
    cout << "Nota esperada na disciplina de BP: " << a1.nota_esperada << endl;

    return 0;
} 