#include <iostream>
#include <sstream>//permite hacer los cambios
using namespace std;
 
string arreglo(string pot)
    {
        int  acarreo=0,resultado;
        string temp;

        for(int i=pot.size()-1;i>=0;i--)
            {
                stringstream camb;
                resultado=(static_cast<int>(pot[i]-48))*2+acarreo;
                acarreo=resultado/10;
                camb<<resultado%10;
                temp=temp+camb.str();//uso del str sacado de internet
            }
        //metodo de multiplicar con los strings
        if(acarreo>0)
            {
                stringstream sum;
                sum<<acarreo;
                temp=temp+sum.str();
            }


        char aux; // no funciona si declaras aux
        for(int i=0;i<temp.size()/2;i++)
            {
                aux=temp[i];
                temp[i]=temp[temp.size()-1-i];
                temp[temp.size()-1-i]=aux;
            }
        return temp;
    }
//lo distribuyo en funciones para que sea mas ordenadado

void suma(string n)
    {
    int cont=0;
    for(int i=0;i<n.size();i++)
        {
            cont=cont+static_cast<int>(n[i]-48);
        }
    cout<<cont<<" ";

    }

int main(){

    string n="2";

    int i=1;
          while(i<1000)
            {
                n=arreglo(n);//se iguala para mandar a suma
                i++;
            }

    suma(n);
}

