#include <iostream>
#include<cmath>
using namespace std;
void borbuja(int arr[], int n){
    int temp;
    for (int i=0;i<n;i++){
        for(int e=0;e<n-1;e++){
            if(arr[e]>arr[e+1]){
                temp=arr[e];
                arr[e]=arr[e+1];
                arr[e+1]=temp;

            }


    }

    }


}
//-//*--------------------------------------------
void merge(int A[], int izq, int dere, int mit)
{
    int tam=dere-izq+1;
     int i, j, k, c[tam];
    i = izq;
    k = izq;
    j = mit + 1;
    while (i <= mit && j <= dere)
    {
        if (A[i] < A[j])
        {
            c[k] = A[i];
            k++;
            i++;
        }
        else
        {
            c[k] = A[j];
            k++;
            j++;
        }
    }
    while (i <= mit)
    {
        c[k] = A[i];
        k++;
        i++;
    }
    while (j <= dere)
    {
        c[k] = A[j];
        k++;
        j++;
    }
    for (i = izq; i < k; i++)
    {
        A[i] = c[i];

    }

}

void mergesort(int arr[], int izq, int dere){
    /**for(int i=izq;i<dere;i++){
        cout<<arr[i]<<"  ";
    }
    cout<<endl;**/
    if(izq<dere){
        int mit=(dere+izq)/2;
        mergesort(arr,izq,mit);
        mergesort(arr,mit+1,dere);
        merge(arr, izq, dere, mit);
        //cout<<" ";
    }

    return;


}

//------------------------------------------

int obmax(int arr[], int n){

    int maxi=arr[0];
    for(int i=0;i<n;i++)
        if(arr[i]>maxi)
            maxi=arr[i];

}



void contsort(int arr[],int n, int ex){
    int sal[n],i,cont[10]={0};
        for(i=0;i<n;i++)
            cont[(arr[i]/ex)%10]++;
        for(i=1;i<10;i++)
            cont[i]+=cont[i-1];
        for(i=n-1;i>=0;i--){
            sal[cont[(arr[i]/ex)%10]-1]=arr[i];
            cont[(arr[i]/ex)%10]--;
        }
        for(i=0;i<n;i++)
            arr[i]=sal[i];
}

void radixsort(int arr[],int n){
    int ex,m;
    m=obmax(arr,n);
    for(ex=1;m/ex>0;ex*=10)
        contsort(arr,n,ex);



}
//-------------------------------------
void insetionsort(int arr[], int tam){
    int aux, pos;
    for (int i=0;i<tam;i++){
        pos=i;//guarda la posicion
        aux=arr[i];//numero del arreglo
        while((pos>0)&&(arr[pos-1]>aux)){
            arr[pos]=arr[pos-1];
            pos--;//iteraciones hacia atras
        }
        arr[pos]=aux;
    }
}




//------------------------------------------------------------
void quicksort(int arr[], int izq, int der){//tener en cuenta el orden de los parametros

    int i=izq,j=der,temp;
    int p=arr[(izq+der)/2];
    while(i<=j){
        while(arr[i]<p)i++;
        while(arr[j]>p)j--;
        if(i<=j){
            temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
            i++;
            j--;
        }
    }
      if(izq<j)
            quicksort(arr,izq,i);
      if(i<der)
            quicksort(arr,i,der);






}

int main()
{
    int arr[]={3,5,2,1,5};
    //quicksort(arr,0,17);
    //radixsort(arr,11);
    //radixsort(arr,5);
    //mergesort(arr,0,4);
    borbuja(arr,5);
    for(int i=0;i<5;i++)
    cout<<arr[i];
    return 0;
}
