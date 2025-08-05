#include <iostream>

using namespace std;


int main () {

    int anonasc;
    int anoatual;
    
    cout << "Informe seu ano de nascimento:";
    cin >> anonasc;
    cout << "Informe o ano atual:";
    cin >> anoatual;
    int idade = anoatual - anonasc;

    
    if (idade < 18){
        cout << "Em " << anoatual << " voce tera " << idade << " anos e nao poderá tirar a habilitacao";
    }
    else if(idade >= 18) {
        cout << "Em " << anoatual << " voce tera " << idade << " anos e podera tirar a habilitacao.";
    }
    else if (idade >= 18 || idade <= 120 ){
    cout <<"Voto obrigatorio!\n";
    }
    else {
    cout << "Valor invalido.\n";
    }


    return 0;
}