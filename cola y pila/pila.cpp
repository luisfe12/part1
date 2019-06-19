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
class pila
{
    private:
        nodo<T> *cabeza;
         int tam;   
    public:
        pila(){cabeza=NULL; tam=0;}
        bool vacio();
        void push(T dato);
        void pop();
        T* Top();
        int getsize(){return tam;}
};


template<typename T>
bool pila<T>::vacio()
{
    if(!tam){cout<<" esta vacio"<<endl;return true;}
    else{cout<<"hay valores"<<endl; return false;}
}


template<typename T>
void pila<T>::push(T dato){
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
void pila<T>::pop()
{

    if(!cabeza)cout<<"no se  encontro nada";
    else
    {
        nodo<T>* borrado2=cabeza;
        nodo<T>* borrado=cabeza;
        while(borrado->next)
        {
            borrado2=borrado;
            borrado=borrado->next;
        }
        borrado2->next=NULL;
        delete borrado;
        tam--;
    }
    if(!tam)cabeza=NULL;
}

template<typename T>
T* pila<T>::Top()
{
    if(tam==0)return NULL;
    else
    {
        int i=0;
        nodo<T> *fin=cabeza;
        while (i<tam-1)
        {
           fin=fin->next;
           i++;
        }
        return &(fin->dato);
    }
    
    
}

int main()
{
    pila<int> stack;
    stack.push(5);
    stack.push(15);
    stack.push(20);
    stack.push(100);
    cout<<*(stack.Top())<<endl;
    stack.pop();
    stack.pop();
    stack.pop();
    stack.pop();
  //  cout<<*(stack.Top())<<endl;
    stack.vacio();
   
}