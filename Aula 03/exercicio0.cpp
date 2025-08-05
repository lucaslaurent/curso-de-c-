#include <iostream>

using namespace std;


int main () {

    int numero1;
    int numero2;

    cout << "Informe o primeiro numero:";
    cin >> numero1;
    cout << "Informe o segundo numero:";
    cin >> numero2;

    if (numero1 > numero2){
        cout << "O primeiro numero digitado eh maior\n";
    }
    else if(numero2 > numero1) {
        cout << "O segundo numero digitado eh maior\n";
    }


    return 0;
}