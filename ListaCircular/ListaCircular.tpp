template <typename T>
ListaCircular<T>::ListaCircular() : tam(0), cabeza(nullptr) {}
//***********************************************************************
template <typename T>
ListaCircular<T>::~ListaCircular() {
    Vaciar();
}
//**************************************************************************
template <typename T>
ListaCircular<T> &ListaCircular<T>::operator=(const ListaCircular<T> &Otralista) {
    if (this == &Otralista)
        return *this;
    Vaciar();
    Elemento *actual = Otralista.cabeza;
    while (actual != nullptr) {
        Agregar(actual->valor);
        actual = actual->siguiente;
        if (actual == Otralista.cabeza) // Si hemos vuelto al inicio de la lista
            break;
    }
    return *this;
}
//**************************************************************************
template <typename T>
ListaCircular<T>::ListaCircular(const ListaCircular<T> &lc) : tam(0), cabeza(nullptr)
{
    *this = lc;
}
//***************************************************************************************
template <typename T>
void ListaCircular<T>::Vaciar()
{
    while(!EstaVacia()){
        Eliminar();
    }
}