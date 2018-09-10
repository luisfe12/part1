#include <iostream>

using namespace std;


int multiplos(int n)
{
int sum=0;
int i=1;
while(i<n){
if(i%3==0||i%5==0){
        sum=sum+i;
    }
    i++;
}
return sum;
}

int main()
{
    int n;
    int suma;
    cin>>n;
    suma= multiplos(n);

   cout<<suma<<endl;

    return 0;
}
