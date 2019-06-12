#include <iostream>
using namespace std;

template<typename T>
class nodo{
    public:
    /*nodo();
    nodo(T);*/
    T dato;
    nodo<T> *next;
    //void print()
};
/*template<typename T>
nodo<T>::nodo(){ dato=NULL; next=NULL;}


template<typename T>
nodo<T>::nodo(T dato){ dato=dato1;}

template<typename T>
void nodo<T>::print(){
    cout<<dato<<" ";
}
/*
template<typename T>
class lista{
    private:
    int nunnodos;
    nodo<T> *nodo_cabeza;

    public:




};*/
template<typename T>
void insetarlista(nodo<T> *lis, T val ){
    nodo<T> *neuevo=new nodo<T>();
    neuevo->dato=val;

    nodo<T> *aux=lis;
    nodo<T> *aux1;

    while((aux) && (aux->dato < val)){
        aux1=aux;
        aux=aux->next;
     }

     if(lis==aux){
        lis==neuevo;
     }

     else{
         aux1->next=neuevo;
     }

    neuevo->next=aux;

    cout<<val<<endl;

}
template<typename T>
void eliminar(nodo<T> *liss, T valor)//T valor -- valor que se quiere elliminar
{
    if(liss){
        nodo<T> *aux_bor;
        nodo<T> *anterior=NULL;

        aux_bor=liss;

        while((aux_bor)&&((aux_bor->dato) != valor)){//busca el valor
            anterior=aux_bor;
            aux_bor=aux_bor->next;
        }

        if(aux_bor==NULL){ 
            cout<<"no exite vel valor indicado"<<endl;
        }//si el valor no se necuentra
        else if(!anterior){
            liss=liss->next; 
            delete aux_bor;
        }// si el valor esta al inicio
        else{
            anterior->next=aux_bor->next; 
            delete aux_bor;
        }// si esta pero no en el inicio

    }
}

template<typename T>
void mostra(nodo<T> *lista){
    nodo<T> *actual=new nodo<T>();
    actual=lista;

    while(actual){
        cout<<actual->dato<<" ";
        actual=actual->next;
    }

}

int main()
{
    nodo<int> *lsita=NULL;
    int dato;

    cin>>dato;

    insetarlista<int>(lsita,dato);

    cin>>dato;

    insetarlista<int>(lsita,dato);

    mostra<int>(lsita);

    int dato1;
    cin>>dato1;
    eliminar<int>(lsita,dato1);

    mostra<int>(lsita);
    return 0;

}