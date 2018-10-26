#include <iostream>
#include <string.h>

using namespace std;

void orden( string *lis, int tam){

for (int i=0;i<tam;i++){
    for(int j=i+1;j<tam;j++){
        string pri=*(lis+i);
        string snd=*(lis+j);
        int cont=0;
        while(pri[cont]==snd[cont]){
            cont++;
        }
       if(pri[cont]>snd[cont]){
        *(lis+i)=snd;
        *(lis+j)=pri;
        }
    }
}

}

int main()
{
    string lis[6]={"luis","kelvin","erick","leonardo","yober","adrian"};
    orden(lis,6);
    for(int i=0;i<6;i++){
        cout<<lis[i]<<" ";
    }
}
