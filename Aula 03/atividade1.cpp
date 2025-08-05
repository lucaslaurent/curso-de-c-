#include <iostream>

using namespace std;


int main () {

    int idade;

    cout << "Informe sua idade:";
    cin >> idade;

    if (idade < 0 || idade >=120){
        cout << "Idade invalida\n";
    }
    else if((idade >= 16 && idade < 18) || idade >= 60) {
        cout << "Voto facultativo\n";
    }
    else if (idade >= 18){
    cout <<"Voto obrigatorio!\n";
    }
    else {
    cout << "Nao pode votar.\n";
    }


    return 0;
}