#include <iostream>
using namespace std;

void palindromo(int a){
    int maxi=1;
    for(int i=999;i>=a;i--){
        for(int j=999;j>=a;j--){
        int cont=i*j;
        int one = cont%10;
		int two = (cont%100 - cont%10)/10;
		int three = (cont%1000 - cont%100)/100;
		int four = (cont%10000 - cont%1000)/1000;
		int five = (cont%100000 - cont%10000)/10000;
		int six = (cont%1000000 - cont%100000)/100000;
        //cout<<cont<<" ";**/


        if((one==six)&&(two==five)&&(three==four)){
            if(cont>maxi)
            maxi=cont;
            if(cont<maxi)
            break;
        }
    }
}
cout<<maxi;
}
        //cout<<maxi;

int main(){

    palindromo(100);

}