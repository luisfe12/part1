#include <iostream>
#include <time.h>
#include<stdlib.h>

using namespace std;
void moverTortuga( int *tortuga, int ava ) {
    if( ava <= 5 )
        *tortuga += 3;
    else if ( ava <= 7 )
        *tortuga -= 6;
    else
        *tortuga += 1;
    if ( *tortuga < 1 )
        *tortuga = 1;}

void moverLiebre( int *liebre, int ava ) {
    if( ava <= 2 )
        *liebre += 0;
    else if ( ava <= 4 )
        *liebre += 9;
    else if ( ava <= 5 )
        *liebre -= 12;
    else if ( ava <= 8 )
        *liebre += 1;
    else
        *liebre -= 2;
    if (*liebre < 1 )
        *liebre = 1;}

void imprimirPosiciones ( int *tortuga, int *liebre ) {
    if( *tortuga == *liebre ){
        cout << "OUCH!    " << *tortuga << "   " << *liebre << endl;}
    else
        cout << "           " << *tortuga << "   " << *liebre << endl;}

int main (){
    int tortuga = 1, liebre = 1,ava;
    srand( time( NULL ));
    cout << "pum!" << "      " << "y Arranca!" << endl;
    cout << "Tortuga" << "      " << "Liebre" << endl;
    while( tortuga < 70 && liebre < 70 ) {
        ava = 1 + rand() % (10-1);
        moverTortuga( &tortuga, ava );
        moverLiebre( &liebre, ava );
        imprimirPosiciones( &tortuga, &liebre );}

    cout << endl;
    if( tortuga >= liebre )
        cout << " La tortuga gana!  bien! " << endl;
    else
        cout << "La liebre gana! :c " << endl;

    return 0;
}
