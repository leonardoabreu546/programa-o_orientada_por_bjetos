#include <iostream>
using namespace std;

int main() {
    int v[7] = {1, 2, 3, 4, 5, 6, 7};
    int *p = v;

    cout << *p++ << " ";

    cout << *(p + 2) << " ";

    cout << *(++p) << " ";

    cout << *(++p + 3) << " ";

    cout << *(++p - 4) << endl;

    p = v;
    for (int i = 0; i < 7; i++) {
        cout << *p++;
        if (i < 6) cout << ",";
        else cout << ".";
    }
    cout << endl;

    return 0;
}