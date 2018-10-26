#include <iostream>

using namespace std;

class ubicacion{
public:
double x;
double y;

ubicacion(double _x=0, double _y=0){
x=_x;
y=_y;
}

void mostrar(){
cout<<x<<y<<endl;
}
};
void cambio(ubicacion &pr,ubicacion &sn){
ubicacion _x= pr;
pr=sn;
sn=_x;

}

void order( ubicacion *arr, int tam){
for (int i=0;i<tam;i++){
    for(int j=i+1;j<tam;j++){
            if(arr[i].x>arr[j].x){
                cambio(arr[i],arr[j]);
            }


}
}
}
int main()
{
    ubicacion puntos[6];
    for(int i=0;i<6;i++){
        cin>>puntos[i].x;
        cin>>puntos[i].y;
    }
    order(puntos,6);
    for(int i=0;i<6;i++){
        puntos[i].mostrar();


}
}
