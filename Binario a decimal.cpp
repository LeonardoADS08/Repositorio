#include <iostream>
using namespace std;
int main() {
    int x, aux = 0, i = 0, j = 0, dec = 0;
    int bin[100];
    cin >> x;
    while (x) {
        bin[i] = x%10;
        x /= 10;
        i++;
    }
    i--;
    while (i >= j) {
        aux = aux * 2 + bin[i];
        i--;
    }
    cout << aux << endl;
    return 0;
}
