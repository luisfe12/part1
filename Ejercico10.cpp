#include <iostream>
using namespace std;

void primos(int n){
    //int primo =true,
    //int acum
    unsigned long long cont=0;
    bool prim;
    //unsigned long long  cont=0;
    for(int i=2;n>0;i++){
            //unsigned long long cont=0;
            int temp=n;
             prim=true;
        for(int j=2;j<i;j++ ){
            if(i%j==0){
                prim=false;
                break;
            }
        }
        if(prim)
        {
            --n ;
            cont=cont+i;
            //cout<<i<<" ";
            if(i>=temp)
                break;

            //cout <<cont<< " ";
        }
        //while(i<=2000000)

    }
    cout <<cont<< " ";
}

/**void sumapri(int n){
    int acum=0,i;
    while(i<=n){

    }

}**/

int main()
{
    int n;
    cin>>n;

    primos(n);
    return 0;
}