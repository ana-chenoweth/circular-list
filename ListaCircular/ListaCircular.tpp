template <typename T>
ListaCircular<T>::ListaCircular() : tam(0), cabeza(nullptr) {}
//***********************************************************************
template <typename T>
ListaCircular<T>::~ListaCircular() {
    Vaciar();
}