#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

class aluno {

public:
    char nome_do_aluno[40] ; 
    int numero_do_aluno;
    float nota1;
    float nota2;
    float nota_final() {return (nota1+nota2)/2;}

    void mostradados();
};

float nota_1_teste() {
    return rand() % 16 + 5;
}

float nota_2_teste() {
    return rand() % 16 + 5;
}

void aluno::mostradados() {
    cout << "Nota do primeiro periodo de BP" << endl;
    cout << "Nome do aluno: " << nome_do_aluno << "\t" << "Numero do aluno: " << numero_do_aluno << endl;
    cout << "Nota 1: " << nota1 << endl;
    cout << "Nota 2: " << nota2 << endl;
    cout << "Nota final de BP: " << nota_final();
}

int main() { 
    srand(time(0));

    aluno a1;

    a1.nota1 = nota_1_teste();
    a1.nota2 = nota_2_teste();
    
    cout << "Introduza o nome do aluno: ";
    cin.getline(a1.nome_do_aluno, 40);

    cout << "Introduza o número do aluno: ";
    cin >> a1.numero_do_aluno;

    system("cls"); 

    a1.mostradados();
    
    return 0;
}