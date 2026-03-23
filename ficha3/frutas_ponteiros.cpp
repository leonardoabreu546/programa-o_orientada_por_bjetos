#include <iostream>
#include <string.h>
using namespace std;

char FrutasEscolhidas[40];

void Frutas(char *fruta1, char *fruta2) {
    FrutasEscolhidas[0] = '\0';

    strcat(FrutasEscolhidas, "As frutas escolhidas foram: ");
    strcat(FrutasEscolhidas, fruta1);
    strcat(FrutasEscolhidas, " e ");
    strcat(FrutasEscolhidas, fruta2);
}

int main() {
    
    char fruta1[20], fruta2[20];

    printf("Insira a primeira fruta: ");
    scanf("%s", fruta1);

    printf("Insira a segunda fruta: ");
    scanf("%s", fruta2);

    Frutas(fruta1, fruta2);

    printf("\n%s\n", FrutasEscolhidas);

    return 0;
}