#include <iostream>
using namespace std;

int mcd(int a, int b) {
    while (b != 0) {
        int residuo = a % b;
        a = b;
        b = residuo;
    }
    return a;
}

int main() {
    int x, y;
    cout << "Ingrese dos numeros: ";
    cin >> x >> y;

    cout << "El MCD es: " << mcd(x, y) << endl;

    return 0;
}
