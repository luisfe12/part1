#include <iostream>
#include <string>
using namespace std;
 int fibonacii(int n){

 int a=0,b=1,acu=0,acu2=0;

 for(int i=1;acu2<=n;i++){
    acu=a+b;
    a=b;
    b=acu;
    if(acu%2==0){
        acu2=acu2+acu;
    }}
 return acu2;
 }
int main(){
int n=4000000;
int fibo;
fibo=fibonacii(n);
cout<<fibo<<endl;




}
