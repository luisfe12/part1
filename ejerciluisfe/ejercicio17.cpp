#include <iostream>
#include <sstream>//permite hacer los cambios
using namespace std;


int main(){
    //el and no se incluye en cada centena inicial, por eso son 99 por centena
    int unidades=36;
    int primde=70;
    int decesig=46*10+(unidades*8);
    int centenas=7*900+(unidades*9)+(primde*9)+(decesig*9)+(unidades*100)+(3*891);
    int cont=unidades+primde+decesig+centenas+11;

    cout<<cont;


}
