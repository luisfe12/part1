#include <iostream>

using namespace std;
bool perfect(int a){
int cont=0;
for(int i=1;i<a;i++){
    if(a%i==0){
    cont+=i;
    }
  }
if(cont==a)
    return true;
return false;
}



void perfecto(int *a,int tam){
int cont=0;
for(int i=1;i<tam;i++){
    if(perfect(*(a+i))){
    cout<< *(a+i)<<" ";
    }}}
/*}
if(tam==cont){
    return cont;
}
else{return cont;}
}*/


int main()
{
   int a[6]={1,2,3,4,27,28};

   perfecto(a,6);
    return 0;
}
