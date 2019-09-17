#include<iostream>
using namespace std;

template<typename T>
class nodo
{
public:
	T dato;
	nodo<T>* next;
	nodo(T dato){this->dato = dato; next =NULL;}
		
};


template<typename T>
class lista1
{
public:
	nodo<T> *cabeza;
	nodo<T> *cola;
	int tam;
	lista1(){cabeza = NULL; cola = NULL; tam =0;}
	void insertar(T dato);
	T buscar_pos(int pos);
	void mostrar();
	void llenar(int jugadores);
};

template<typename T>
void lista1<T>::insertar(T dato)
{
	nodo<T>* nuevo = new nodo<T>(dato);
	if(cabeza == NULL)
	{
		cabeza = nuevo;
		cola = nuevo;
		tam++;

	}

	else if (dato <= cabeza->dato)
	{
		nuevo->next = cabeza;
		cabeza = nuevo;
		tam++;
	}

	else if (dato >= cola->dato)
	{
		cola->next = nuevo;
		cola = nuevo;
		tam++;
	}
	else
	{
		nodo<T>* aux = cabeza;
		nodo<T>* aux1;
		while(aux)
		{
			if(aux->dato >= dato)
			{
				aux1->next = nuevo;
				nuevo->next = aux;
				break;
			}

			else
			{
				aux1 = aux;
				aux = aux->next;
			}
		}
		tam++;
	}

	
}

template<typename T>
T lista1<T>::buscar_pos(int pos)
{
	if(!cola){cout<<"no hay valor"<<endl; return 0;}
	else if(pos >=tam) {cout<<"ese valor excedio"<<endl; return 0;}
	else if(pos == 0) return(cabeza->dato);
	else if (pos == tam-1) return(cola->dato);
	else
	{
		nodo<T>* aux = cabeza;
		int cont = 0;//cero si se quiere enpasa en sero y amarcar al siguiente, 1 si se quiere asignar ifual que el numero
						//con 1///10=10, con 0 10 =11
		while(cont<=pos-1)
		{
			
			aux= aux->next;
			cont++;
		}

		return (aux->dato);
	}

	
}

template<typename T>
void lista1<T>::llenar(int jugadores)
{
	for(int i=1; i<=jugadores; i++)
	{
		insertar(i);
	}
	mostrar();
}

template<typename T>
void lista1<T>::mostrar()
{
	nodo<T> *aux = cabeza;
	int cont =0;
	while(aux)
	{
		cout<<aux->dato<<" ";
		aux = aux->next;
		
	}
	cout<<endl;
}


template<typename T>
class lista2
{
public:
	nodo<T> *cabeza;
	nodo<T> *cola;
	int tam;
	lista2(){cabeza = NULL; cola = NULL; tam =0;}
	void insertar(T dato);
	T buscar_pos(int pos);
	void mostrar();
	void llenar(int jugadores);

};


template<typename T>
void lista2<T>::insertar(T dato)
{
	nodo<T>* nuevo = new nodo<T>(dato);
	if(cabeza == NULL)
	{
		cabeza = nuevo;
		cola = nuevo;
		tam++;

	}

	else if (dato <= cabeza->dato)
	{
		nuevo->next = cabeza;
		cabeza = nuevo;
		tam++;
	}

	else if (dato >= cola->dato)
	{
		cola->next = nuevo;
		cola = nuevo;
		tam++;
	}
	else
	{
		nodo<T>* aux = cabeza;
		nodo<T>* aux1;
		while(aux)
		{
			if(aux->dato >= dato)
			{
				aux1->next = nuevo;
				nuevo->next = aux;
				break;
			}

			else
			{
				aux1 = aux;
				aux = aux->next;
			}
		}
		tam++;
	}

	
}

template<typename T>
T lista2<T>::buscar_pos(int pos)
{
	if(!cola){cout<<"no hay valor"<<endl; return 0;}
	else if(pos >=tam) {cout<<"ese valor excedio"<<endl; return 0;}
	else if(pos == 0) return(cabeza->dato);
	else if (pos == tam-1) return(cola->dato);
	else
	{
		nodo<T>* aux = cabeza;
		int cont = 0;//cero si se quiere enpasa en sero y amarcar al siguiente, 1 si se quiere asignar ifual que el numero
						//con 1///10=10, con 0 10 =11
		while(cont<=pos-1)
		{
			
			aux= aux->next;
			cont++;
		}

		return (aux->dato);
	}

	
}

template<typename T>
void lista2<T>::llenar(int jugadores)
{
	for(int i=1; i<=jugadores; i++)
	{
		insertar(i);
	}
	mostrar();
}

template<typename T>
void lista2<T>::mostrar()
{
	nodo<T> *aux = cabeza;
	int cont =0;
	while(aux)
	{
		cout<<aux->dato<<" ";
		aux = aux->next;
		
	}
	cout<<endl;
}



class nueva
{
public:
	nueva(){}
	void prnitLost(lista1<int> L, lista2<int> P, int mos);
	
};

void nueva::prnitLost(lista1<int> L, lista2<int> P, int mos)
{
	cout<<P.buscar_pos(mos)<<endl;
	cout<<L.buscar_pos(mos)<<endl;
}

int main(int argc, char const *argv[])
{
	lista1<int> p; 
	lista2<int> l;
	p.llenar(10);
	l.insertar(30);
	l.insertar(31);
	l.insertar(32);
	l.insertar(33);
	l.insertar(35);
	nueva N;
	
	N.prnitLost(p,l, 3);

	return 0;


}