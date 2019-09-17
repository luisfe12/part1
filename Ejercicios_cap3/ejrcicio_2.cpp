#include <iostream>
using namespace std;

template<typename T>
class nodo
{
public:
	T dato;
	nodo<T>* next;
	nodo<T>* previous;//solo se usara en la lista doble
	nodo(T dato){this->dato = dato; next = NULL;}
	
	
};

template<typename T>
class lista_enlazada
{
private:
	nodo<T>*cabeza;
	nodo<T>* cola;
	int tam;
public:
	lista_enlazada(){cabeza =NULL; cola = NULL; tam =0;}
	void insertar(T dato);
	void cambio(int pos, int pos1);
	void mostrar();
	
	
};

template<typename T>
void lista_enlazada<T>::insertar(T dato)
{
	nodo<T> * nuevo  = new nodo<T>(dato);
	if(!cabeza)
	{
		cabeza = nuevo;
		cola = nuevo;
		tam++;

	}
	else if(cabeza->dato >= dato)
	{
		nuevo->next = cabeza;
		cabeza = nuevo;
		tam++;
	}

	else if (cola->dato <= dato)
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
				tam++;
				break;

			}

			else
			{
				aux1 = aux;
				aux = aux->next;
			}
		}
	}
}


template<typename T>
void lista_enlazada<T>::cambio(int pos, int pos1)
{
	if((pos > tam-1) || (pos1 > tam-1))return;
	
	else
	{
		nodo<T>* aux = cabeza;
		nodo<T>* aux1;
		nodo<T>* tem;
		//paar el primero
		int cont =0;
		nodo<T>* au = cabeza;
		nodo<T>*au1;
		nodo<T>* temp;

		int cont1=0;
		
		while(cont <= pos)
		{
			if(cont == pos)
			{
				if (pos !=0)
				{
					 tem = aux->next; 
				}
				
				break;
			}
			else
			{
				aux1 = aux;
				aux = aux->next;
				cont++;
			}
		}

		
		while(cont1<=pos1)
		{
			if(cont1 == pos1)
			{

				temp = au->next;
				break;
			}
			else
			{
				au1 = au;
				au = au->next;
				cont1++;
			}
		}

		if(pos ==0 && pos1==tam-1)
		{
			cabeza = cabeza->next;
			cola = au1;
			aux->next = NULL;
			cola->next = aux;
			au->next = cabeza;
			cola = aux;
			cabeza = au;
			
		}

		else if (pos == 0)
		{
			if(pos1 == 1)
			{
				au->next = aux;
				aux->next = temp;
				cabeza=au;


			}

			else
			{
				cabeza = cabeza->next;
				aux->next = temp;
				au1->next = aux;
				au->next = cabeza;
				cabeza = au;
			}

		}


		//cambip
		else
		{	
			if(pos = pos1-1)
			{
				aux1->next = au;
				au->next = aux;
				aux->next = NULL;
				cola = aux;
			}
			else
			{	
				aux1->next = au;//dicho y hecho XDXDX
				au1->next = aux;
				aux->next = temp;
				au->next = tem;
			}
		}
	}
}


template<typename T>
void lista_enlazada<T>::mostrar()
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
class lista_doble
{
private:
	nodo<T>* cabeza;
	nodo<T>* cola;
	int tam;


public:
	lista_doble(){cabeza = NULL; cola = NULL; tam =0;}
	void insertar(T dato);
	void mostrar();
	void cambio(int &pos, int& pos1);
	void eliminar(int& pos);
	
};


template<typename T>
void lista_doble<T>::insertar(T dato)
{
		nodo<T>* nuevo = new nodo<T>(dato);
		if(!cabeza)
		{
			cabeza = nuevo;
			cola = nuevo;
			tam++;
		}

		else if(cabeza->dato >= dato)
		{
			cabeza->previous = nuevo;
			nuevo->next = cabeza;
			cabeza = nuevo;
		}

		else if (cola->dato <= dato)
		{
			cola->next = nuevo;
			nuevo->previous = cola;
			cola = nuevo;
		}
		else
		{
			nodo<T>* aux = cabeza;
			nodo<T>* aux1;

			while(aux)
			{
				if(aux->dato >= dato)
				{
					nuevo->next = aux;
					aux->previous = nuevo;
					nuevo->previous = aux1;
					aux1->next = nuevo;
				}
				else
				{
					aux1 =aux;
					aux = aux->next;//deja en el medio en nuevo valor hacer de esta forma
				}
			}
		}
		tam++;
}
template<typename T>
void lista_doble<T>::cambio(int &pos, int& pos1)
{
	if(!cabeza) return;
	else if ((pos1 < tam-1) || (pos < tam))
	{
		cout<<"no procede causa"<<endl;
		return;
	}
	else
	{
		nodo<T>* primero = cabeza;
		nodo<T>* primero1; 
		int cont =0;
		while(cont < pos)
		{
			if(pos!=0)
			{
				primero1 = primero;
				primero = primero->next;
			}	
			cont++;	
		}

		nodo<T>* segundo = cabeza;
		nodo<T>* segundo1;
		int cont1 =0;
		while(cont < pos)
		{
				segundo1 = segundo;
				segundo = segundo->next;
				cont1++;	
		}

		
	
		primero->next = segundo->next;
		segundo->nex = primero->next;
		primero->next->previous = segundo;
		segundo->next->previous = primero;
		primero->previous->next = segundo;
		segundo->previous->next = primero;

			
		if (pos ==0 && pos1 = tam-1)
		{
			/*
			cabeza = cabeza->next;
			cola = cola->previous;///metodo largo desde cero
			cola->next = primero;
			primero->previous = cola;
			primero->next = NULL;
			segundo->next = cabeza;
			cabeza->previous = segundo;
			segundo->previous = NULL;
			cabeza = segundo;
			cola = primero;*/
		
			primero->next = NULL;
			segundo->previous=NULL;//metodo teniendo ta implementado lo demas
			cola = primero;
			cabeza= segundo;


		}

		else if (((pos1 != 0) &&  (pos1 != tam-1)) && (pos == 0))
		{
			
			//segundo->previous = NULL;
			cabeza = segundo;
		}

		else if (((pos != tam-1) && (pos !=0))  && (pos1 == tam-1))
		{
			cola = primero;
			
		}
		
	}
}



template<typename T>
void lista_doble<T>::mostrar()
{
	nodo<T>* imprimir = cabeza;
	while(imprimir)
	{
		cout<<imprimir->dato<<" ";
		imprimir= imprimir->next;
	}
	cout<<endl;
}
int main(int argc, char const *argv[])
{

	lista_enlazada<int> li;
	li.insertar(0);
	li.insertar(1);
	li.insertar(2);
	li.insertar(3);
	li.insertar(4);
	li.insertar(5);
	li.insertar(6);
	li.mostrar();
	li.cambio(0,6);
	li.mostrar();
	
	
	lista_enlazada<int> ld;
	ld.insertar(11);
	ld.insertar(12);
	ld.insertar(13);
	ld.insertar(13);
	ld.insertar(14);
	ld.insertar(15);
	ld.insertar(16);
	ld.mostrar();
	ld.cambio(0,2);
	ld.mostrar();
	ld.insertar(10);ld.insertar(8);ld.insertar(9);
	ld.mostrar();
	ld.insertar(17);ld.insertar(18);ld.insertar(19);
	ld.mostrar();
	return 0;
}