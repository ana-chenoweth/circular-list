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
//**********************************************************************************************
template <typename T>
void ListaCircular<T>::Agregar(T valor)
{
    Elemento* nuevo;
    if(EstaVacia()){
        nuevo = new Elemento(valor);
        nuevo->siguiente = nuevo;
        nuevo->anterior = nuevo;
    }else{
        nuevo = new Elemento(valor, cabeza, cabeza->anterior);
        cabeza->anterior->siguiente = nuevo;
        cabeza->anterior = nuevo;
    }
    cabeza = nuevo;
    ++tam;
}
//**************************************************************************
template <typename T>
void ListaCircular<T>::Eliminar()
{
    if(EstaVacia()) throw ListaVacia();
    Elemento* porBorrar = cabeza;
    if(tam==1) cabeza = nullptr;
    else{
        porBorrar->anterior->siguiente = porBorrar->siguiente;
        porBorrar -> siguiente -> anterior = porBorrar -> anterior;
        cabeza = cabeza->siguiente;
    }
    delete porBorrar;
    tam--;
}
//*****************************************************************************************
template <typename T>
bool ListaCircular<T>::EstaVacia() const
{
    return tam==0;
}
//****************************************************************************************************************
template <typename T>
const char *ListaCircular<T>::ListaVacia::what() const throw() {
  return "Lista vacia";
}
//****************************************************************************************************************
template <typename T>
const char *ListaCircular<T>::FueraRango::what() const throw() {
  return "Fuera de rango";
}