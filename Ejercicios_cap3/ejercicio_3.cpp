#include <iostream>
using namespace std;


class nodo
{
public:
	T dato;
	nodo<T>* siguinte
	nodo(T dato)
	{
		this->dato = dato;
		siguinte = NULL;
	}
	
};


class iterador
{
private:
	nodo<T>* valor;
public:
	iterador(){valor = NULL;}
	iterador(nodo<T>*ptr){valor = ptr;}
	iterador<T> operator ++(iterador<T>& nuevo);
	T operator*();
	bool operator != (iterador<T>& nuevo);
	bool operator == (iterador<T>& nuevo);
	
	
};

template<typename T>
iterador<T> iterador<T>::operator ++ (iterador<T>& nuevo)
{
	return (nuevo->siguinte);
}

template<typename T>
T iterador<T>::operator *()
{
	return (valor->dato);
}

template<typename T>
bool iterador<T>::operator !=(iterador<T>& nuevo)
{
	return (valor!=nuevo.valor);
}

template<typename T>
bool iterador<T>::operator ==(iterador<T>& nuevo)
{
	return (valor == nuevo.valor);
}


class lista
{
private:
	nodo<T>* cabeza; 
public:
	lista();
	~lista();
	
};