#include <iostream>
#include<string>
using namespace std;

int primo(int x)
{
    int i=1,pri=1,a=1;

    while(i<=x){
        if(pri%a==0){
            if(pri!=1){
            if(pri==a){
                cout<<pri<<endl;
                i++;
            }}
           a=2;
           pri++;
        }
        else{a++;}
    }



}

int main(){
int x;
cin>>x;
int pri;
pri=primo( x);
cout<<pri<<endl;






}
