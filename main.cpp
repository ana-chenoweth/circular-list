#include <iostream>
#include <ctime>
#include "ListaCircular/ListaCircular.hpp"

using namespace std;

int main() {
    srand(time(NULL));
    // Crear un c�rculo de personas con valores del 1 al 5
    ListaCircular<string> josephusCirculo;
    cout << "**********************************************************\n"
    << "               CIRCULO DE JOSEPH                                        \n"
    << "                                                          \n";
    cout << "Numero de personas: ";

    int n;
    do{
        cin >> n;
        if(n>=100) cout <<"Introduce un numero menor a " << 100 << ": ";
        if(n<1) cout <<"Introduce un numero mayor a " << 1 << ": ";
    }while(n>=100 ||n<1);
    return 0;
}
