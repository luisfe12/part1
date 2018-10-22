#include<iostream>
using namespace std;
void pares(unsigned int *vptr,int tam){
for(int i=0;i<5;i++){
    cout<<*(vptr+i)<<endl;}

cout<<*(vptr+0)<<endl;
cout<<*(vptr+4)<<endl;
}
int main(){

unsigned int valores[]={2,4,6,8,10};

pares(valores,5);
}
