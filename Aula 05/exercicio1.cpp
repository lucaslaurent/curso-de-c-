#include <iostream>

using namespace std;

void classificaAluno(float media, int faltas ){ 

    if (media >= 9.5 && faltas <= 10) {
        cout << "APROVADO COM LOUVOR.\n";
    }
    else if (media >= 7 && faltas <= 10) {
        cout << "APROVADO.\n";
    }
    else if (media < 7 && faltas <= 10){
        cout << "REPROVADO.\n";
    }
    else if(faltas > 10) {
        cout << "REPROVADO POR FALTA.\n";
    }

}
int main (){
    float media;
    int faltas;

    cout << "Informe sua media:";
    cin >> media;

    cout << "Informe suas faltas:";
    cin >> faltas;

    classificaAluno(media, faltas);

    return 0;
}