#ifndef LISTADOBLE_H
#define LISTADOBLE_H

#include "Nodo.h"
#include<thread>

class ListaDoble
{
private:
    int tam;
    Nodo* cabeza;
    Nodo* cola;
public:
    ListaDoble(){tam=0; cabeza=NULL; cola=NULL;};
    void insertar_Valor(VideoType dato1);
    void Buscar_valor(VideoType dato);
    void Borrar_valor(VideoType dato);
    void Eliminar_todo();
    int get_tam(){return tam;}
    VideoType get_dato(VideoType dato);
};

void  ListaDoble::insertar_Valor(VideoType dato)
{
    Nodo *nuevo = new Nodo (dato);
    if(!cabeza)
    {
        cabeza = nuevo;
        cola = nuevo;
        tam++;
    }

    else
    {
        if(nuevo < cabeza)
        {
            cabeza->anterior=nuevo;
            nuevo->siguiente = cabeza;//ingresa nuevo bloque
            cabeza = nuevo;
        }

        else if (nuevo > cola)
        {
            cola->siguiente=nuevo;
            nuevo->anterior = cola;
            cola = nuevo;//nueva direccion
        }
        else if ((cola==nuevo) )
        {
           cola->dato.checkInt();
        }

        else if((cabeza == nuevo))
        {
            cabeza->dato.checkInt();
        }
        
        else
        {
            Nodo* aux = cabeza;
            Nodo*auxca;
            
            while(aux)
            {
                if(aux->dato > dato)
                {
                    nuevo->siguiente = aux;
                    aux->anterior = nuevo;
                    auxca->siguiente = nuevo;
                    nuevo->anterior = auxca;
                    tam++;
                    break;
                }

                else
                {
                    auxca = aux;
                    aux = aux->siguiente;
                }
                
               

            }
        }
        
        
    }
}

void ListaDoble::Borrar_valor(VideoType video)
{
    if(!cabeza) return;
    else if(cabeza->dato.getTitle() == video.getTitle())
    {
        Nodo *tem = cabeza;
        cabeza = cabeza->siguiente;
        delete tem;
        tam--;
    }
    else if (cola->dato.getTitle() == video.getTitle())
    {
        Nodo *tem = cola;
        cola = cola->anterior;
        delete tem;
        tam--;
    }

    else
    {
        Nodo *tem1 = cabeza;
        Nodo *tem2;
        while (tem1)
        {
            if(tem1->dato.getTitle() == video.getTitle())
            {
                    tem2->siguiente = tem1->siguiente;
                    tem1->siguiente->anterior = tem2;
                    tam--;
                    delete tem1;
            }

            else
            {
                tem2 = tem1;
                tem1 = tem1->siguiente;
            }
            
        }
        
        
    }
    
    
} 

#endif