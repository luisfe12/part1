#include <iostream>

using namespace std;
/**
Ejerciico 1
# define PI 3.14159
# define NEWLINE ’\n’

 int main ()
 {
    double r = 5.0;
    double circle ;

    circle = 2 * PI * r; // circle = 2 * 3.14159 * r;
    cout << circle << NEWLINE; // cout << circle << ’\n ’;

 return 0;//no reconoce el NEWLINE como slato de linea
 }
-------------
Ejercicio 2

int main(){
 const int pathwidth = 100;
 // pathwidth = 2; this will cause a compiler error !
 const char tabulator = '\t';
 cout << " tabulator =" << tabulator <<'\n'; //imprime el texto y ejecuta los caracteres
}
---------
Ejercicio 3
/**
int main(){
// this code outputs 0 to 9
for(int i = 0; i < 10;)
{
cout << i++ << "\n";//imprime hasta el 9
}

 // this code outputs 1 to 10
 for(int i = 0; i < 10;)
 {
 cout << ++i << "\n";//imprime hasta el 10
 }

}
----------
Ejercicio 4

int main ()
 {
 int arg1 ;
 arg1 = -1;
 int x, y, z;
 char myDouble = '5';
 char arg1 = 'A';// variables con el mmismo nombre pero difernte tipo
 cout << arg1 << "\n";
 return 0;
 }
 ------------
 Ejercicio 5
 **/
int main ()
 {
    int arg1 ;
    arg1 = -1;
    {
        char arg1 = ’A’;//como no declara las encuentra
       // cout << arg1 << "\n";// es lo mismo

    }
 return 0;
 }
/**int main(){

int i = 1;
 while ( true )
 {
 if(i > 10)
 break ;
 cout << i << "\n";
 ++i;
 **/
