#include <iostream>

using namespace std;

double volumeEsfera(double raio){ 

    double PI = 3.1416;
    double volume = (4.0 * PI * raio * raio * raio) / 3.0;
    return volume;

}
int main (){
    double raio1, raio2, raio3;
  
    cout << "Raio da primeira esfera:";
    cin >> raio1;

    cout << "Raio da segunda esfera:";
    cin >> raio2;

    cout << "Raio da terceira esfera:";
    cin >> raio3;

    double volume1 = volumeEsfera(raio1);
    double volume2 = volumeEsfera(raio2);
    double volume3 = volumeEsfera(raio3);

    cout << "Volume da primeira esfera: " << volume1 << endl;
    cout << "Volume da segunda esfera: " << volume2 << endl;
    cout << "Volume da terceira esfera: " << volume3 << endl;

    return 0;
}