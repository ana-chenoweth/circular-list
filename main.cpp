#include <iostream>
#include <ctime>
#include "ListaCircular/ListaCircular.hpp"

using namespace std;

string nombreAleatorio() {
    string nombres[] = {"Maria", "Jose", "Carmen", "Juan", "Ana", "Antonio", "Laura", "Francisco", "Isabel", "David", "Rosa", "Miguel", "Elena", "Manuel", "Patricia", "Luis", "Carolina", "Javier", "Marta", "Pedro", "Natalia", "Diego", "Cristina", "Carlos", "Lucia", "Alejandro", "Paula", "Angela", "Sergio", "Nuria", "Pablo", "Raquel", "Daniel", "Sara", "Fernando", "Beatriz", "Ricardo", "Claudia", "Ruben", "Andrea", "Adrian", "Elena", "Jesus", "Marta", "Alberto", "Lorena", "Jorge", "Georgina", "Denisse", "Omar", "Ivan", "Silvia", "Clara", "Bernardo", "Lulu", "Sofia"};
    string nombreCompleto = nombres[rand() % sizeof(nombres) / sizeof(string)];
    return nombreCompleto;
}


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

    cout << "Simulacion del problema de Josephus con k = ";
    int k;
    do{
        cin >> k;
        if(k<1) cout <<"Introduce un numero mayor a " << 1 << ": ";
    }while(k<1);

    cout << "                                                          \n"
    << "**********************************************************" << endl << endl;


    for (int i = 1; i <= n; ++i) {
        josephusCirculo.Agregar(nombreAleatorio());
    }
    return 0;
}
