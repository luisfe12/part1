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
    void insetar_ini(VideoType dato);
    void insetar_fin(VideoType dato);
    void Buscar_valor(VideoType dato);
    void Borrar_valor(VideoType dato);
    void Eliminar_todo();
    void mostrar();
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
        if(nuevo->dato.getTitle() < cabeza->dato.getTitle())
        {
            cabeza->anterior=nuevo;
            nuevo->siguiente = cabeza;//ingresa nuevo bloque
            cabeza = nuevo;
        }

        else if (nuevo->dato.getTitle() > cola->dato.getTitle())
        {
            cola->siguiente=nuevo;
            nuevo->anterior = cola;
            cola = nuevo;//nueva direccion
        }
        else if ((cola->dato.getTitle()==nuevo->dato.getTitle()) )
        {
           cola->dato.checkInt();
        }

        else if((cabeza->dato.getTitle() == nuevo->dato.getTitle()))
        {
            cabeza->dato.checkInt();
        }
        
        else
        {
            Nodo* aux = cabeza;
            Nodo*auxca;
            
            while(aux)
            {
                if(aux->dato.getTitle() > dato.getTitle())
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


void ListaDoble::mostrar()
{
    Nodo * aux = cabeza;
    while (aux)
    {
        aux->dato.printInfo();
        aux = aux->siguiente;
        cout<<"se muestra el sigueinete valor "<<endl;
    }

   
    
}

#endif