#include <iostream>

using namespace std;

int mystery2( const char * ); // prototype
int main()
{
    char string1[ 80 ];
    cout << "Enter a string: ";
    cin >> string1;
    cout << mystery2( string1 ) << endl;
}
 // end main
 // What does this function do? 18
 //me devuelve la cantidad de letras obtenidas de  palabra
 int mystery2( const char *s )
 {
     unsigned int x;
      for ( x = 0; *s != '\0'; ++s )
        ++x;
      return x;  }
      // end function mystery2
