#include <iostream>
#include <string>
using namespace std;

double calculaHospedagem(string tipo, int quantDiarias) { 
    double total = 0;

    if (tipo == "individual") {
        total = 125 * quantDiarias;
    } else if (tipo == "suite dupla") {
        total = 140 * quantDiarias;
    } else if (tipo == "suite tripla") {
        total = 180 * quantDiarias;
    } else {
        cout << "Tipo de apartamento invalido!" << endl;
        return 0;
    }

    if (quantDiarias >= 3) {
        total = total * 0.85;
    }

    return total;
}

int main() {
    string tipo;
    int quantDiarias;

    cout << "Informe o tipo do apartamento: ";
    getline(cin, tipo);

    cout << "Informe a quantidade de dias: ";
    cin >> quantDiarias;

    double total = calculaHospedagem(tipo, quantDiarias);

    cout << "O valor total a ser pago sera de R$" << total << endl;

    return 0;
}
