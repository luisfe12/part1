#include <iostream>
using namespace std;

template<typename T>
class nodo
{	
public:
	nodo<T>* next;
	T dato;
	nodo(T dato){this->dato = dato; next = NULL;}

	
};

template<typename T>
class lista
{
private:
	nodo<T>*cabeza;
	nodo<T>*cola;
	int tam;
public:
	lista(){cola = NULL; cabeza = NULL; tam =0;}
	void insertar(T dato);
	void mostrar();
	void eliminar(T dato);
	nodo<T>* get_cabeza(){return cabeza;}
	nodo<T>* get_cola(){return cola;}
	nodo<T>* set_cola_sigueite(nodo<T>*a)
	{
		 cola->next = a;
	}
	
};

template<typename T>
void lista<T>::insertar(T dato)
{
	nodo<T>* nuevo = new nodo<T>(dato);
	if (!cabeza)
	{
		cabeza = nuevo;
		cola= nuevo;
		tam++; 	
	}

	else if (cabeza->dato >= dato)
	{
		nuevo->next = cabeza;
		cabeza = nuevo;
	}

	else if (cola->dato <= dato)
	{
		cola->next = nuevo;
		cola = nuevo;
	}

	else
	{
		nodo<T>* aux =cabeza;
		nodo<T>* aux1;

		while(aux)
		{
			if(aux->dato >= dato)
			{
				nuevo->next = aux;
				aux1->next = nuevo;
				break;
			}

			else
			{
				aux1 = aux;
				aux = aux->next;
			}
		}
	}
	tam++;
} 

template<typename T>
void lista<T>::eliminar(T dato)
{
	if(!cabeza)return;
	else if (cabeza->dato == dato)
	{
		nodo<T>* temporal = cabeza;
		cabeza= cabeza->next;
		delete temporal;
		tam--;
	}

	else 
	{
		nodo<T>* temporal = cabeza;
		nodo<T>* temporal1;
		while(temporal)
		{
			if(temporal->dato >= dato)
			{
				if(temporal == cola)
				{
					cola = temporal1;
					temporal1->next = NULL;
					delete temporal;

				}
				else
				{
					temporal1->next = temporal->next;
					delete temporal;
				}
				break;

			}
			else
			{
				temporal1 = temporal;
				temporal = temporal->next;
			}
		}
		tam--;
	}
}


template<typename T>
void lista<T>::mostrar()
{
	nodo<T>* aux = cabeza;
	while(aux)
	{
		cout<<aux->dato<<" ";
		aux = aux->next;
	}
	cout<<endl;
}




void unir_listas(lista<int> a, lista<int> b,int primer, int segundo)
{
	a.insertar(primer);
	b.insertar(segundo);
	a.set_cola_sigueite(b.get_cabeza()); 
}
int main(int argc, char const *argv[])
{
	lista<int> l1;
	lista<int> l2;
	l1.insertar(0);
	l1.insertar(1);
	l1.insertar(2);
	l1.insertar(3);
	l1.insertar(4);
	l1.insertar(5);
	l1.mostrar();
	l2.insertar(10);
	l2.insertar(11);
	l2.insertar(12);
	l2.insertar(13);
	l2.insertar(14);
	l2.insertar(15);
	unir_listas(l1, l2, 6, 9);
	l1.mostrar();
	return 0;
}