#include <iostream>

using namespace std;
void variables(long *ptr,int tam){
int valor1=*(ptr+0);
int valor2=*(ptr+1);
cout<<valor1<<" "<<valor2<<endl;
for (int i=0;i<tam;i++){
    cout<<*(ptr+i)<<endl;}

}

int main()
{
  long valores[]={2,6,8,3,4};
  variables(valores,5);



}
