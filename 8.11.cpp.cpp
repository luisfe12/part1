#include <iostream>

using namespace std;

int main()
{
    int *numero;           //manda la direcion de memoria
    cout<<numero<<endl;

     double *realPtr;
     long *integerPtr;
     integerPtr = realPtr; // son de diferente tipo las variables

     int *x ,y; //no es declarado como un puntero la Y
      x = y;

     char s[] = "this is a character array"; //declaras char pero se inseerta string, ademas no se inicializa el contador
     for ( ; *s != '\0'; ++s)
        cout << *s << ' ';


    short *numPtr, result;
    void *genericPtr = numPtr; //el void no es un tipo de apuntador a objeto
    result = *genericPtr + 7;

    double x = 19.34; //se utiliza el mismo tipo de variable lo cual no se puede convertir
    double xPtr = &x;
    cout << xPtr << endl;



}
