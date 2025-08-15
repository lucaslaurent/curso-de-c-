#include <iostream>

using namespace std;

void volumeEsfera(float raio){ 

    if (raio >= 9.5 && faltas <= 10) {
        cout << "Volume da primeira efera.\n";
    }
    else if (media >= 7 && faltas <= 10) {
        cout << "Volume da segunda efera.\n";
    }
    else if (media < 7 && faltas <= 10){
        cout << "Volume da terceira efera.\n";
    }
   
    return 0;
}
int main (){
    float raio1, raio2, raio3;
    float volume;
    
    cout << "Raio da primeira esfera:";
    cin >> raio1;

    cout << "Raio da segunda esfera:";
    cin >> raio2;

    cout << "Raio da terceira esfera:";
    cin >> raio3;

    volumeEsfera();

    return 0;
}