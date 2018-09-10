#include <iostream>
using namespace std;

int potencia(int n){

int pri=(1+n)*n/2;
int pro=((n * (n + 1) * (2*n + 1)) / 6);

return (pri*pri)-pro;}


int main()
{
    int n;
    int pot;
    cin>>n;
    pot=potencia(n);

    cout << pot << endl;
    return 0;
}
