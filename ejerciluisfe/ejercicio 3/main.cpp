#include <iostream>

using namespace std;

  int primo(long long int n) {
//int mayor=1;

           for(int i=2;n>1;i++){
                while(n%i==0){
                    n=n/i;
                    cout<<i<<endl;
                    }


                }



           }




int main()
{
    long long int n= 600851475143;
   // cin>>n;
     int prim;
    prim = primo(n);
    cout <<prim<< endl;
    return 0;
}
