#include <iostream>
using namespace std;


template<typename T>
class nodo
{
    public:
    T dato;
    nodo<T> *next;
    
    nodo( T dato)
    {
        next=NULL;
        this->dato=dato;
    }
};

template<typename T>
class cola
{
    private:
        nodo<T> *cabeza;
        int tam; 
    public:
        cola(){cabeza=NULL; tam=0;}
        bool vacio();
        void push(T dato);
        void pop();
        T* front();
        T* back();
        int getsize(){return tam;}
        
};

template<typename T>
bool cola<T>::vacio()
{
    if(!cabeza) return true;
    else return false;
}

template<typename T>
void cola<T>::push(T dato)
{
    nodo<T>* elemento= new nodo<T>(dato);
    if(!cabeza)cabeza=elemento;
    else
    {
        nodo<T>* fin= cabeza;
        while(fin->next)
        {
            fin=fin->next;
        }
        fin->next=elemento;
    }
    tam++;
}


template<typename T>

void cola<T>::pop()
{
    if(!cabeza)cout<<"no hay elementos"<<endl;
    else
    {
        nodo<T>* borrado=cabeza;
        cabeza=cabeza->next;
        delete borrado;
        tam--;
    }
    
}
template<typename T>
T* cola<T>::front()
{
    if(tam==0) return NULL;
    else return &(cabeza->dato);
}


template<typename T>
T* cola<T>::back()
{
    if(!cabeza)return NULL;
    else
    {
        int i=0;
        nodo<T>* fin=cabeza;
        while(i<tam-1)
        {
            fin=fin->next;
            i++;
        }
        return &(fin->dato);
        
    }
    
}


int main()
{
    cola<int> que;
    que.push(5);
    que.push(20);
    cout<<*(que.front())<<endl;
    que.pop();
    cout<<*(que.front())<<endl;
    cout<<*(que.back())<<endl;
}