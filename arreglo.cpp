#include <iostream>

using namespace std;


    void arreglo(int *arr,int tam){
    int aux,mini;
    for(int i=0;i<tam;i++){
        mini=i;
        for(int j=i+1;i<tam;i++){
            if(*(arr+j)<*(arr+mini)){
                mini=j;
            }
        }
        aux=*(arr+i);
        *(arr+i)=*(arr+mini);
        *(arr+mini)=aux;
    }
    for(int i=0;i<tam;i++){

    cout <<*(arr+i)<<" ";
    }
}
int main(){
int arr[]={1,3,8,6};
arreglo(arr,4);
return 0;


}
