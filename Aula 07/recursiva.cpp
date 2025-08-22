#include <iostream>
using namespace std;

int fatorial (int numero){

    if (numero == 0 || numero == 1) {
        return 1;

    }
    return numero * fatorial(numero - 1);

    
}

int main (){

    int numero, resultado;
    cout << "Informe um numero:\n";
    cin >> numero;

    resultado = fatorial(numero);

    cout << "O fatorial do " << numero << " eh " << resultado << endl;

    return 0;
}