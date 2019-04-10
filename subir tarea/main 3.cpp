#include <iostream>

//using namespace std;
/**
Ejercicio 2
void f( const int a = 5)//valor constante no del 5 sino de la variable ingresada
 {
 std :: cout << a*2 << " \ n";
 }

 int a = 123;
 int main ()
 {
 f (1) ;
 f (a ) ;
 int b = 3;
 f (b ) ;
 int a = 4;
 f (a ) ;
 f();
 }
 --------------
 Parte 3
 ejercicio 3.1


 int main () {

 printNum (35) ;//una falla es el protottipo

 return 0;

 }
 void printNum (int number ) { std :: cout << number ; }

 -------------
 Ejercicio 3.2

  void printNum () { std :: cout << number ; };//El parametro
 int main () {

 int number = 35;

 printNum ( number );

 return 0;
 }
 -----------

 Ejercicio 3.3


void doubleNumber (int num ) {num = num * 2;}//La referencia, obligatoria si se quiere cambiar el valor

 int main () {
 int num = 35;
 doubleNumber (num ) ;
 std :: cout << num ; // Should print 70, imprime 35
 return 0;
 }
-----------------------

Ejercicio 3.4

#include <cstdlib> // contains some math functions

 int difference ( const int x , const int y) {
 int diff = abs ( x - y ) ; // abs ( n) returns absolute value of n
 //falta vallor de retorno
 }

 int main () {

 std :: cout << difference (24 , 1238) ;

 return 0;

 }

 ----------------
 Ejercico 3.5

 int sum ( const int x, const int y ) {
 return x + y ;
 }

 int main () {
 std :: cout << sum (1, 2, 3); // Should print 6, solo recive 2 parametros
 return 0;
 }

 ---------------
 Ejercico 3.6   preguntar

const int ARRAY_LEN = 10;

 int main () {

 int arr [ ARRAY_LEN ] = {10}; // Note implicit initialization of
 // other elements
 int *xPtr = arr , yPtr = arr + ARRAY_LEN-1 ;//falta el *(------)
 std :: cout << *xPtr <<' ' << *yPtr ; // Should output 10 0
 return 0; //imprime 10 y 0

 }
 ----------

 Ejercico 4.1
int sum ( const int x , const int y ) {

 return x + y ;
 }

 double sum ( const double x , const double y ) {
 return x + y ;

 }
 -----------
 Ejercicio 4.2
 Ya que no piede combinarse 2 tipos de datos distintos, el compilador no sabria a quien llamar.


 ------------------

 Ejercicio 4.3
 Hacer suma de 2 a 4 elemntos con en el main llamndo una funcion, para esto se sobrecarga la
 funcion suma una con 2 parametros y otra con 2

int sum ( const int x , const int y , const int z ) {

 return x + y + z ;
 }

 int sum ( const int a , const int b , const int c , const int d ) {

 return a + b + c + d ;
 }

----------------------------

Ejercicio 4.4
int sum( const int a, const int b, const int c = 0 , const int d = 0)
{
 return a + b + c + d ;//asume el valor ingresado en main, de caso contraio usa ya los declardos
                       //ver el primer ejercicio
 }

---------------

Ejerccio 4.5
una suma de los elementos de un arreglo
int sum( const int numbers [], const int numbersLen ) {
 int sum = 0;
 for(int i = 0; i < numbersLen ; ++i ) {
 sum += numbers [ i];
 }
 return sum;
 }

 ----------------

 Ejercicio 4.6

 int sum ( const int numbers [] , const int numbersLen ) {
 return numbersLen == 0 ? 0 : numbers [0] + sum ( numbers + 1 ,numbersLen - 1) ;

 //Va sumando valores de las posiciones, hasta que el tamaño sea cero y sumarle 0, y dar la suma del arreglo
 }
 -------------


Ejerccio 5

double computePi ( const int n){
srand ( time (0) ) ;
int dartsInCircle = 0;

 for(int i = 0; i < n ; ++i ) {
 double x = rand () / ( double ) RAND_MAX , y = rand () / ( double )RAND_MAX ;
    if( sqrt ( x * x + y * y ) < 1 ) {
    ++ dartsInCircle ;
 }
 }

    // r^2 is 1 , and a/4 = dartsInCircle /n, yielding this for pi:
    return dartsInCircle / static_cast <double >(n ) * 4;
 }
----------------

Ejerccio 6.1

void printArray ( const int arr [], const int len ) {
    for(int i = 0; i < len; ++i ) {
    cout << arr [ i];
    if( i < len -1) {
        cout << ", ";
 }
 }
 }

----------------------
Ejercicio 6.2


void reverso(int arr[], int tam){
    for(int i=0; i<tam/2;i++){
        int temp=arr[i];
        arr[i]=arr[tam-1-i];
        *(arr+tam-1-i)=temp;

    }

}

int main(){
 int arr[]={1,6,5,8,6,5,10,12};
 reverso(arr,8);
 for(int i=0;i<8;i++){
    std::cout<<arr[i];
    std::cout<<" ";
 }

}
/**
--------------------
Ejercicio 6.3
/**
void transpose ( const int input [][ LENGTH ] , int output [][ WIDTH ]) {

 for(int i = 0; i < WIDTH ; ++ i ) {//filas

    for (int j = 0; j < LENGTH ; ++ j ) {//columnas

            output [ j ][ i ] = input [ i ][ j ];//cambio de filas por columnas

       }

     }

 }
--------------------

Ejercicio 6.4

Se devolvería un puntero al primer elemento de la matriz, pero la matriz se habría ido
Fuera de alcance, invalida el puntero


------------
Ejercicio 6.5

void reverso(int *arr, int tam){
    for(int i=0; i<tam/2;i++){
        int temp=*(arr+i);
        *(arr+i)=*(arr+tam-1-i);
        *(arr+tam-1-i)=temp;

    }

}

int main(){
 int arr[]={1,6,5,8,6,5,10,12};
 reverso(arr,8);
 for(int i=0;i<8;i++){
    std::cout<<*(arr+i);
    std::cout<<" ";
 }

}
--------------

Ejercicio 7.1

int stringLength ( const char * str ) {

    int length = 0;

    while (*( str + length ) != ’ \0 ’) {

    ++ length ;//tamaño del string

    }

    return length ;

 }
 --------------------

 Ejercico  7.2

 void swap (int &x, int & y ) {
    int tmp = x ;
    x = y ;       //paso por referencia
    y = tmp;
 }

------------
Ejercico 7.3

void swap (int *x , int * y ) //Cambio(swap) con punteros, cambia valores
{

    int tmp = *x ;

    *x = *y ;

    *y = tmp ;

 }

Ejercico 7.4

void swap (int **x , int **y ) {//NO intercambio valores en una direccion
                                  intercambio punteros en una direccio(otro puntero)

 int *tmp = *x ;//otro puntero ya que asigna el puntero con valor a otro puntero

 *x = *y ;

 *y = tmp ;

 }


 int main(){
    int x = 5, y = 6;
 int *ptr1 = &x, *ptr2 = &y; //preguntar
 swap (&ptr1 , &ptr2 );
std:: cout << *ptr1 <<" "<< *ptr2 ; // Prints "6 5"
}


-------------------------

Ejercico 7.5
char * oddOrEven = " Never odd or even ";

1.	 char *nthCharPtr = &oddOrEven[5];
//puntero de tipo char que apunte a la sexta direccion
2.	 nthCharPtr -= 2; or nthCharPtr = oddOrEven + 3;
//usar  aritmetica de punteros para apuntar a la cuarta posicion
3.	 cout << *nthCharPtr;
//Imprimer el valor actualmente señalado por nthCharPtr---valor en pos 4
4.	 char **pointerPtr = &nthCharPtr;
//Crear un doble puntero que apunte al primer puntero
5.	 cout << pointerPtr;
//Imprimir el valor en pointerPtr
6.	 cout << **pointerPtr;
//imprimo el valor al que apunta
7.	 nthCharPtr++; to point to the next character in oddOrEven (i.e. one character past
        the location it currently points to)
        //quiere que apunte a la direccion siguiente de la cual apunta(x=x+1)
8.	 cout << nthCharPtr - oddOrEven;
Para apuntar a la direccion anterior, un caracter pasado
**/

