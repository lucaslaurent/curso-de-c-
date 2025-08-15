#include <iostream>

using namespace std;

int mostrarSoma (int n1, int n2){
    int resultado = n1 + n2;
    return resultado;
}
void mostrarClassificacao(int resultado){
    if (resultado == 0) {
        cout << "O resultado é zero.\n";

    }
    else if (resultado > 0) {
        cout << "O resultado é positivo.\n";
    }
    else {
        cout << "O resultado é negativo.\n";
    }
}
int main (){

    int n1, n2, resultado;

    cout << "Informe um numero:";
    cin >> n1;

    cout << "Informe um numero:";
    cin >> n2;

    resultado = mostrarSoma(n1, n2);

    cout << "O resultado da operacao eh: " << resultado << endl;

    mostrarClassificacao(resultado);


    return 0;
}