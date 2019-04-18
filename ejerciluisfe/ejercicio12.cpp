#include <iostream>
using namespace std;
bool primo(int n){
    for(int i=2;i<n;i++)
        if(n%i==0){
            return false;
        }

        return true;



}
void triangulo(int n){
unsigned long long temp=1,cont=0;
while(cont<500){//el valor siguiente a la condicion, el siguiente que cumpla, la misma respiesta si se pone "<="
	    cont=0;
    n=(temp*(temp+1))/2;//sacar nuevo valor de n
    if(primo(n)){
        temp++;
        continue;
    }
    for(int i=1;i<=n/2;i++){
        if(n%i==0){
            cont=cont+1;

        }
    }
    cont++;//el mismo numero como divisor
    cout<<n<<endl;


 temp++;
 //j=n;//no necesario solo para asegurar valor
}
cout<< n;//se puede poner n;
}

int main(){
int n=1;
triangulo(n);

return 0;
}