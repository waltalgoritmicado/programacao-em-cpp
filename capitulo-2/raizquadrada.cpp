#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double numero, solucao;

    cout << "Digite um número: ";
    cin >> numero;

    solucao = sqrt(numero);
    cout << "A raiz quadrada eh: " << solucao << endl;

    return 0;
}
