#include <iostream>

using namespace std;
//ejercicio 1
/**
int main()
{
    const char* str= "hola mundo";

    cout << str << " \ n ";//no lo reconoce como salto de line por el espacio
    cout<<"c";
}
----
ejercico 2


int main(){
 int N;
 cin>>N;
 for(; N-- > 0;){
    cout<<"hola mundo";}  //imprime las veces iguales al numero, no imprime nada con negarivos.
    return 0;
}
------
Ejercico 3

int main(){

int N;
cin>>N;
while(N-->0){

cout<<"Hola Mundo"; //Ya que la resta en 1 es posterior a la variable el bucle se repite las mismas veces que la variable
      }

}
------
Ejercicio 4

int main(){
    int N;
    cin>>N;

    do{
        cout<<"Hola Mundo"; //imprime las misma veces que el ejercicio anterior, ya que la resta en 1 esta antes de la variable.
    }while(--N >0);

}
------------

int sumdiv (int number){
    int acum=0;
    for(int i =1;i<=(number/2);i++){
        if(number%i==0)//condicion distinta
        acum=acum+i;

        }
    return acum;
            }
bool friends(int n1, int n2){
    if(sumdiv(n1)==n2 && sumdiv(n2)==n1)
       return true;


}
int main(){
    (friends(2,284))?cout<<"friends" : cout<<"gg";


}
--------------
ejerecicio 3.1

int x; //We cannot declare the same name within a block because it will generate a compiler error
        // no
            //
            //the code will not  compile


--------
Ejercicio 3.2
int main()
{


    int N;
    cout<< "Enter N: ";
    cin>>N;
    int acc=0;
    // handle the first number separately
    cin >> acc ;
    int minVal = acc ;
    int maxVal = acc ;

    // then process the rest of the input
  for(int i = 1; i < N ; ++ i )
    {
        int a;
        cin >> a ;
      acc += a ; //acc+acc+a, ahi solo aumenta para la division del mean
      if(a < minVal )
         {
              minVal = a ;
          }
      if(a > maxVal )
          {

          maxVal = a ;
          }
    }

      cout << " Mean : " << ( double ) acc / N << " \ n ";
      cout << " Max : " << maxVal << " \ n ";
      cout << " Min : " << minVal << " \ n ";
      cout << " Range : " << ( maxVal - minVal ) << " \ n ";

 return 0;
 }
 -------------
 ejercico 3.3

int main ()
 {
    int N ;
    cin >> N ;
    for(int i = 2; N > 0; ++i )//los intentos que tengo
    {
        bool isPrime = true ;
        for (int j = 2; j < i ;  ++j )//comprueba si el i es primo
        {
            if(i % j == 0)
                    {
                    isPrime = false ;
                    break ;
                    }
        }
        if( isPrime )
        {
            --N ;
            cout << i << " \ n ";
        }
    }
 return 0;
 }
 -------------
 ejercicio 3.4.1

 int main ()
    {
        while (1)  //bucle infinito
    {
        int N ;
        cin >> N;              //solo muesra la duvision si cumple la condidcion
        cout << (( N % 5 == 0 && N >= 0) ? N /5 : -1) << " \ n ";
    }
 return 0;
 }
---------------
ejercico 3.4.2

    int main ()
    {
        while (1)
    {
        int N ;
        cin >> N ;
        if( N % 5 > 0)
        {
            cout << " -1\ n ";//con el continue se sigue cumpliendo el if sin pasar a la siguiente instruccion
            continue ;        // claro hasta que el if no cumpla la condicion
        }
            cout << N /5 << " \ n ";
    }
    return 0;
 }
 ----------
 ejercicio3.4.3

 int main ()
{
    while (1)
    {
        int N ;
        cin >> N ;
        if( N % 5 > 0)
        {
            cout << " -1\ n ";
            continue ;//continua el bucle y esta istruccion, hata que no cumpla la condicion
        }
        if( N == -1)
        {
            break ;//rompera este bucle infinito
        }
        cout << N/5 << "\n ";
    }
        cout << " Goodbye !\n";// mensaje que se muestra cuando se rompe este bucle
    return 0;
 }
-----------
Ejerccio 3.5

void cambio(int &a, int &b){
            int tem=a;
            a=b;
            b=tem;
            }
int main(){
    int a,b,acum=0;
    cin>>a>>b;

if(b>a){
        cambio(a,b);
    }
while(b!=1){
      a=a*2;
      b=b/2;
        if(b%2!=0){
            acum=acum+a;
        }

      }
cout<<acum<<endl;
}
------------
4 factorial
Ejerccio 4.1

int main(){
    int n;
    cin>>n;
    int mul=1;
    if(n==0)cout<<n;

    for (int i=1;i<=n;i++){
        if(n==-1)
        break;
        mul=mul*i;
    }

    cout<<mul;

}
----------
Ejercicio 4.4

 long long accumulator = 1;
    int main ()
    {
        int number ;
        cout << " Enter a number : ";
        cin >> number ;
        if( number < 0)
        {
            cout << " No negative numbers allowed !\ n ";
            return 1;
        }
        if( number > 20)
        {
        cout << " Program will not produce correct result !\ n ";
        }
        for (; number > 0; accumulator *= number--) ;//ddcremento de l a variable despues de la instruccion a=a*n, ejecuta multiplicacion antes
        cout << " The factorial of " << number << " is " << accumulator<< " .\ n ";
        return 0;
   } //sale negativo cuando sobrepasas los iimites

------------
Ejercicio 4.5

int main ()
{
    int number ;
    while(number!=-1){
    cout << " Enter a number : ";
    cin >> number ;

    switch ( number )
    {
    case 0:
    case 1:
        cout << "1\n";//con los 3 primeros casos hay salto de linea
        break ;
    case 2:
        cout << "2\n";
        break ;
    case 3:
        cout << "6\n";
        break ;
    case 4:
        cout << "24\ n";
        break ;
    case 5:
        cout << " 120\ n";
        break ;
    case 6:
        cout << " 720\ n";
        break ;
    case 7:
        cout << " 5040\ n";
        break ;
    case 8:
        cout << " 40320\ n ";
        break ;
    case 9:
        cout << " 362880\ n ";
        break ;
    case 10:
        cout << " 3628800\ n ";
        break ;
    default :
        cout << " Input not supported !\n ";//salto de linea
        break ;
    }}
 return 0;
 }
 ---------------
 Ejercico 4.6
 **/
