#include <iostream>
using namespace std;
/***https://github.com/erick2200/CC2/blob/master/euler/p14.cpp**/
unsigned long long col(unsigned long long &n){
            if(n%2==0){
                //i=i+1;
                n=n/2;
                //continue;
            }
            else{
                //i=i+1;
                n=(n*3)+1;
                //continue;
            }
            return n;


}

int cadena(unsigned long long n){
    int cont=0;
    while(n>1){
        col(n);
        cont++;
    }

    return cont;


}
int main(){
    int maxi=1,val;
    for(int i=1;i<1000000;i++){
        if(maxi<cadena(i))
            {
            maxi=cadena(i);
            val=i;
            //<<val;
        }
        //cout<<val<<" ";
    }
    cout<<val;
}
