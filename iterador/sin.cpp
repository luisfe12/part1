#include <iostream>
using namespace std;

template<typename T>
class nodo
{
    public:
    
    T dato;
    nodo<T> *next;
    
    nodo( T dato){
        next=NULL;
        this->dato=dato;
    }
};


template<typename T>
class lista{
private:
    nodo<T> *cabeza;
    int tam;
public:
    lista(){cabeza=NULL; tam=0;};
    ~lista();
    class iterator{
        nodo<T> *nodolista;
     public:
        iterator(){}
        bool operator != (nodo<T>* o)
        {
         
            return (nodolista != o);
        }
        iterator& operator=(nodo<T> *igual)
        {
            nodolista=igual;
            return *this;
        }
        iterator& operator ++()
        {
            nodolista=nodolista->next;
            return *this;
        }

       

        T* get(){return &(nodolista->dato);}

    };
    void push_back(T dato);
    void push_front(T dato);

    void insertar(T dato);
    T* get_back();
    T* get_front();
    T* get(int);
   
    nodo<T> *begin(){return cabeza;}
    nodo<T> *end();
    void remove_front();
    void remove_back();
    void remove(int);
    void invertir();
    int getsize(){return tam;}
    //void destruir();
    void mostrar();

};
template<typename T>
lista<T>:: ~lista()
{
    if(!cabeza)cout<<"no hay elementos";
    //int cont=0;
    else
    {
        int cont=0;
        while (cont!=tam)
        {
        nodo<T> *borrado=cabeza;
        cabeza=cabeza->next;
        delete borrado;
        cont++;
        }
        cout<<"se borro los datos";
    }
}
template<typename T>
void lista<T>::remove_front()
{
    if(!cabeza)cout<<"no se remueve nada";
    /* else
    {
        delete 
    }*/
}

template<typename T>
void lista<T>::push_front(T dato){
    nodo<T>* nuevo=new nodo<T>(dato);
   

   if(!cabeza){
       cabeza=nuevo;
   }

   else{
       nuevo->next=cabeza;
       cabeza=nuevo;
   }
   tam++;
}    

template<typename T>
void lista<T>::push_back(T dato){
    nodo<T> *nuevo =new nodo<T>(dato);
   
    if(!cabeza){
        cabeza=nuevo;
    }
    else{
        nodo<T> *fin= cabeza;
        while(fin->next){
            fin=fin->next;
            
        }
        fin->next=nuevo;
    }
    tam++;

}
template<typename T>
T* lista<T>::get_front(){
    if(tam==0)return NULL;
    return &(cabeza->dato);

}


template<typename T>
T* lista<T>::get(int indice){
    if(tam==0)return NULL;

   
    
    else
    {
        nodo<T> *aux=cabeza;
        int cont=0;
        while(cont!=indice)
        {
            aux = aux->next;
            cont++;

            
        }

        if(!aux) return NULL;
        
        return &(aux->dato);
    }
}

template<typename T>
T* lista<T>::get_back(){
     if(tam==0)return NULL;


    else{
        nodo<T> *fin=cabeza;
        while (fin->next)
        {
           fin=fin->next;
           
        }
        return &(fin->dato);
    }

}

template<typename T>
void lista<T>::invertir(){
    nodo<T> *prim;
    nodo<T> *sigu;
    nodo<T> *temporal=cabeza;

    while(temporal){
        sigu=temporal->next;
        temporal->next=prim;
        prim=temporal;
        temporal=sigu;
    }
   cabeza=prim;
}



template<typename T>
nodo<T>* lista<T>::end()
{
    if(!cabeza)  return cabeza;
    
    else
    {
        nodo<T> *temporal = cabeza;
        while (temporal->next)
        {
            temporal=temporal->next;
        }
        return temporal->next;
    }
    
    
}


template<typename T>
void lista<T>::mostrar()
{
    nodo<T>* aux = cabeza;
    int cont=0;
    while(cont<tam)
    {
       cout<<aux->dato<< " ";
       aux=aux->next;
       cont++;
    }
}

 


int main()
{
    
    
     lista<int> listass;
     
    listass.push_back(0);
     listass.push_back(5);
     listass.push_back(15);
     listass.push_front(15);

 
    lista<int>::iterator iterador;
    for(iterador=listass.begin(); iterador!=listass.end();++iterador)
     { 
       
       cout<<*(iterador.get())<<" ";
       
       
     }
     cout<<listass.getsize();
     cout<<endl;

    return 0;

}