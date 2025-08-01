#include <iostream>
#include <string>

using namespace std;

int main() {
    int idade;
    float altura;
    char genero;
    bool programador;
    string nome;

    cout << "Informe sua idade:";
    cin >> idade;

    cout << "Informe sua altura:";
    cin >> altura;

    cout << "Informe seu genero:";
    cin >> genero;

    cout << "Eh programador?";
    cin >> programador;

    cin.ignore();

    cout << "Informe seu nome:";
    //cin >> nome;
    getline(cin, nome);


    cout << "Idade:" << idade << endl;
    cout << "Altura:" << altura << endl;
    cout << "Genero:" << genero << endl;
    cout << boolalpha;
    cout << "Programador:" << programador << endl;
    cout << "Nome:" << nome << endl;



}