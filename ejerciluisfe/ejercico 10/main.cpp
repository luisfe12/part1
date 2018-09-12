#include <iostream>

using namespace std;
int primo(int n){
int cont=0,i=1,j=1,sum=0;

for(int i=1;i<n;i++){

    for(int j=1;j<=i;j++){
        if(i%j==0){
            cont++;
            }}
             if(cont==2){
                 sum=sum+i;
                 cont=0;

                    }
             else{cont=0;}

    }
return sum;


}


int main()
{
    int n;
    int pir;
    cin>>n;

    pir=primo(n);
    cout << pir << endl;
    return 0;
}
