#include <iostream>
using namespace std;

template<typename T>
class nodo
{
public:
	T dato;
	nodo<T>*siguiente;
	nodo<T>* anterior;
	nodo(T dato){this->dato = dato; siguiente = NULL; anterior = NULL;}
	
	
};

template<typename T>
class lista_doble
{
private:
	nodo<T>* cabeza;
	nodo<T>* cola;
	int tam;
public:
	lista_doble(){cola = NULL; cabeza = NULL; tam =0;}
	void insertar(T dato);
	void eliminar(T dato);
	void mostrar();
	void asignar_cabeza(nodo<T>* aux){aux = cabeza;}
	int get_tam(){return tam;}
	T get_valor(nodo<T>* aux){return aux->dato;}
	T buscar_valor(int pos);
	//~lista_doble();
	
};

template<typename T>
void lista_doble<T>::insertar(T dato)
{
	nodo<T>* nuevo = new nodo<T>(dato);
	if (!cabeza)
	{
		cabeza = nuevo;
		cola = nuevo;

	}
	else if (cabeza->dato >= dato)
	{
		cabeza->anterior = nuevo;
		nuevo->siguiente =cabeza;
		cabeza = nuevo;
	}

	else if (cola->dato <= dato)
	{
		 cola->siguiente = nuevo;
		 nuevo->anterior = cola;
		 cola = nuevo;
	}

	else
	{
		nodo<T>* aux = cabeza;

		while(aux)
		{
			if(aux->dato >= dato)
			{
				aux->anterior->siguiente = nuevo;
				nuevo->anterior = aux->anterior;
				nuevo->siguiente = aux;
				aux->anterior = nuevo;
				break;
			}
			else
			{
				aux = aux->siguiente;
			}
		}
	}
	tam++;
}


template<typename T>
void lista_doble<T>::mostrar()
{
	nodo<T>* temporal = cabeza;
	while(temporal)
	{
		cout<<temporal->dato<<" ";
		temporal = temporal->siguiente;
	}
	cout<<endl;
}


template<typename T>
T lista_doble<T>::buscar_valor(int pos)
{
	if(!cabeza)
	{
		cout<<"no hay valores por eso te doy:"<<endl;
		return 0;
	}
	else if (pos == 0)
	{
		return (cabeza->dato);
	}

	else if (pos == tam-1)
	{
		return (cola->dato);
	}

	else
	{
		nodo<T>* auxiliar = cabeza;
		int cont =0;
		while(cont < pos)
		{
			auxiliar = auxiliar->siguiente;
			cont++;
		}

		return (auxiliar->dato);

	}

}


void interseccion(lista_doble<int> a, lista_doble<int> b)
{
	int pos =0, pos1 =0;
	int val, val1;
	while(pos < a.get_tam())
	{
		while(pos1<b.get_tam())
		{
			val = a.buscar_valor(pos);
			val1 = b.buscar_valor(pos1);
			if(val == val1)cout<<val<<" ";
			else
			{
				break;
			}
			pos1++;
		}

		pos++;
	}
}
int main(int argc, char const *argv[])
{
	lista_doble<int> ld;
	ld.insertar(10);
	ld.insertar(0);
	ld.insertar(1);
	ld.insertar(11);
	ld.insertar(9);
	ld.insertar(2);
	ld.insertar(12);
	ld.insertar(5);
	ld.mostrar();
	lista_doble<int> ld2;
	ld2.insertar(10);
	ld2.insertar(0);
	ld2.insertar(1);
	ld2.insertar(11);
	ld2.insertar(9);
	ld2.insertar(2);
	ld2.insertar(12);
	ld2.insertar(15);
	ld2.mostrar();
	cout<<"valores de interseccion: "<<endl;
	interseccion(ld, ld2);
	return 0;
}