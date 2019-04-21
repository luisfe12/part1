#include <iostream>
#include <sstream>//permite hacer los cambios
using namespace std;
//https://github.com/erick2200/CC2/blob/master/euler/p20.cpp
 string  factorial(int n){
 int acarreo=0, resultado;
 string val="1";
 for(int i=1;i<=n;i++){
    acarreo=0;
    string temp;
    for(int j=val.size()-1;j>=0;j--)
            {
                stringstream camb;
                resultado=(static_cast<int>(val[j]-48))*i+acarreo;
                acarreo=resultado/10;
                camb<<resultado%10;
                temp=temp+camb.str();//uso del str sacado de internet
            }

    if(acarreo>0)
            {
                stringstream sum;
                sum<<acarreo%10;
                temp=temp+sum.str();
                if( acarreo >9)//sacada del git de ereick
                    {
                        stringstream sum;
                        sum << acarreo/10;
                        temp += sum.str();
                    }

            }

     char aux; // no funciona si declaras aux
        for(int k=0;k<temp.size()/2;k++)
            {
                aux=temp[k];
                temp[k]=temp[temp.size()-1-k];
                temp[temp.size()-1-k]=aux;
            }

        val=temp;// se hace la asignacion ya que debe cambiar el nuevo string o numero;


 }

 return val;


 }
 void  suma(string n)
    {
    int cont=0;
    for(int i=0;i<n.size();i++)
        {
            cont=cont+static_cast<int>(n[i]-48);
        }
    cout<<cont;

    }


    int main(){

    string n=factorial(100);//una variable donde se guarda lo retornada
    suma(n);

    }