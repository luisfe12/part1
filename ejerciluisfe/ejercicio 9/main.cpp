#include <iostream>

using namespace std;

int pitagoras(int n){

    for(int i=1;i<=n;i++){
        for(int j=i+1;j<=n;j++){
            for(int k=j+1;k<=n;k++){
                if(i*i+j*j==k*k){
                    if(i+j+k==n){
                        return i,j,k;
                    }

                }

            }
        }

    }



}










int main()
{
    int n=1000;
    int sum;
    sum=pitagoras(n);
    cout << sum << endl;
    return 0;
}
