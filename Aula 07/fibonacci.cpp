#include <iostream>
using namespace std;

int fibonacci (int numero){

    if (numero == 1) {
        return 0;
    }
    if (numero == 2) {
        return 1;
    }
    int resultado = fibonacci(numero - 1) + fibonacci(numero - 2);

    return resultado;

}

int main (){

    int numero, resultado;
    cout << "Informe um numero:\n";
    cin >> numero;

    resultado = fibonacci(numero);

    cout << "O " << numero << "º termo da sequencia de fibonacci eh " << resultado << endl;

    return 0;
}