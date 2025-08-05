#include <iostream>

using namespace std;


int main () {

    

    cout << "----- MENU -----:\n";
    cout << "1 - Opção 1\n";
    cout << "2 - Opção 2\n";
    cout << "3 - Opção 3\n";


    int opcao;
    cout << "Escolha uma opção: ";
    cin >> opcao; // 1, 2, 3


    switch (opcao) {

        case 1:
            cout << "Voce escolheu a primeira opção\n";
            break;
        case 2:
            cout << "Voce escolheu a segunda opção\n";
            break;
        case 3:
            cout << "Voce escolheu a segunda opção\n";
            break;
        defaut:
            cout <<"Opcao invalida.";
    }

    /*
    if (opcao == 1 ){
        cout << "Voce escolheu a primeira opção\n";
    }
    else if (opcao == 2){
        cout << "Voce escolheu a segunda opção\n";
    }
    else if (opcao == 3) {
        cout << "Voce escolheu a terceira opção\n";
    }
    else {
        cout <<"Opcao invalida.";
    }
*/
    return 0;
}