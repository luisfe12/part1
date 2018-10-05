#include <iostream>

using namespace std;
bool nprimo(int a){
int cont=0;
for(int i=1;i<=a;i++){
    if(a%i==0){
        cont+=1;
    }
}
if(cont==2)
    return true;
return false;
}
void primo(int *arr,int tam){
for(int i=0;i<tam;i++)
    if(nprimo(*(arr+i)))
        cout<<*(arr+i)<<" ";
}

int main()
{
    int a[]={1,2,3,4,5,6,13};
    primo(a,7);

    return 0;
}
