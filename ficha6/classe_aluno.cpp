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

    return 0;
} 
 
 
 
 
