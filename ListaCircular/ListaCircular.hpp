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
    ListaCircular<T> &operator=(const ListaCircular<T> &lc);
    ListaCircular<T>(const ListaCircular &lc);
    void Agregar(T valor);
    
    bool EstaVacia() const;
    void Vaciar();

  /** \class ListaVacia
 *  \brief Excepci&oacute;n lanzada cuando se realiza una operaci&oacute;n en una lista vac&iacute;a.
 */
  class ListaVacia : public std::exception
  {
  public:
    virtual const char *what() const throw();
  };

  /** \class FueraRango
 *  \brief Excepci&oacute;n lanzada cuando se intenta acceder a una posici&oacute;n fuera del rango de la lista.
 */
  class FueraRango : public std::exception
  {
  public:
    virtual const char *what() const throw();
  };
  
};

#include "ListaCircular.tpp"

#endif // LISTACIRCULAR_HPP_INCLUDED
