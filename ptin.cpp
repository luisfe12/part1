#include <iostream>

using namespace std;
void invertir(int *arr,int tama){
for(int i=tama-1;i>=0;i--){
    cout<<*(arr+i)<<" ";
}
}
int main()
{
    int a[]={1,3,3,6,7,8};
    invertir(a,6);
    return 0;
}
