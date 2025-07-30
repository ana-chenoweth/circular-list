#ifndef LISTACIRCULAR_HPP_INCLUDED
#define LISTACIRCULAR_HPP_INCLUDED

template <typename T>
class ListaCircular {
private:
    struct Elemento {
        T valor;
        Elemento* siguiente;
        Elemento* anterior;
        Elemento(T v, Elemento* sig = nullptr, Elemento* ant = nullptr)
            : valor(v), siguiente(sig), anterior(ant) {}
    };
    int tam;
    Elemento* cabeza;

public:
    ListaCircular();
    ~ListaCircular();

};

#include "ListaCircular.tpp"

#endif // LISTACIRCULAR_HPP_INCLUDED
