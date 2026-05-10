using namespace std;
#include <iostream>

int main(){

    float notas[4] = {12.5, 18.0, 10.0, 14.0};
    float *p=notas;

    *(p+1) += 1;
    *(p+3) = 20;

    for(int i=0; i<4; i++){
        cout << *(p+i);
    }

    return 0;

}