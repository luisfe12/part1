#include <iostream>

using namespace std;
int primo(int n){
int cont=0;
int sum=0;
for(int i=1;i<=n;i++){
    if(i!=1){
    for(int j=1;j<=i;j++){
        if(i%j==0){
            cont=cont+1;
            }
        }
    }
    if(cont==2){
        sum=sum+i;
}




return sum;

}}












int main()
{
    int n;
    cin>>n;
    int pir;
    pir=primo(n);
    cout << pir << endl;
    return 0;
}
