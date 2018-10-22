#include <iostream>

using namespace std;

For  each  of  the  following,  write  C++  statements  that  perform  the  specifiedtask.  Assume that double-precision, floating-point numbers are stored in eightbyte sand that the starting address of the built-in array is at location 1002500in memory.  Each part of the exercise should use the results of previous partswhere appropriate.

a) Declare a built-in array of type double called numbers with 10 elements, andinitialize  the  elements  to  the  values  0.0,  1.1,  2.2,  . . . ,  9.9.   Assume  that  theconstant size has been defined as 10.1

doublenumbers [   s i z e   ]   ={0 . 0 ,   1 . 1 ,   2 . 2 ,   3 . 3 ,   4 . 4 , 5 . 5 , 6 . 6 , 7 . 7 , 8 . 8 , 9 . 9};

b) Declare a pointer nPtr that points to a variable of type double.
 double*nPtr ;

c)  Use  a  for  statement  to  display  the  elementsofbuilt-inarray  numbers  usingarray subscript notation.  Display each number with one digit to the right of thedecimal point.

cout<<fixed<<showpoint<<setprecision (   1   );
for( sizet   i  =  0 ;   i<size ;  ++i   )
cout<<numbers [   i   ]<<’  ’ ;

d) Write two separate statements that eachas signthestart ing address of built-inarray numbers to the pointer variable nPtr.
 nPtr = numbers;
 nPtr = &numbers[ 0 ];

 e) Use a for statementto display the elements of built-in array numbers usingpointer/offset notation with pointer nPtr.

  cout << fixed << showpoint << setprecision( 1 );
  for ( size_t j = 0; j < size; ++j )
    cout << *( nPtr + j ) << ' ';

f)  Use  a  for  statementto  display  the  elements  ofbuilt-in  array  numbers  usingpointer/offset notation with the built-in array’s name as the pointer.

cout << fixed << showpoint << setprecision( 1 );
for ( size_t k = 0; k < size; ++k )
    cout << *( numbers + k ) << ' ';

g) Usea for statement to display the elements of built-inarray numbers using-pointer/subscript notation with pointer nPtr.

 cout << fixed << showpoint << setprecision( 1 );
 for ( size_t m = 0; m < size; ++m )
    cout << nPtr[ m ] << ' ';

h)  Refer  to  the  fourth  element  of  built-in  array  numbers  using  array  sub-script  notation,  pointer/offset  notation  with  the  built-in  array’s  name  as  thepointer,pointer subscript notation with nPtr and pointer/offset notation withnPtr.

 numbers[ 3 ]
 *( numbers + 3 )
 nPtr[ 3 ]
 *( nPtr + 3 )

i) Assuming that nPtr points to the beginning of built-in array numbers, whataddress is referenced by nPtr + 8?  What value is stored at that location?

The address is 1002500 + 8 * 8 = 1002564. The value is 8.8.


j) Assumingthat nPtr pointsto numbers[5],whataddressisreferencedby nPtr afternPtr -= 4 is executed?  What’s the value stored at that location?

 The address of numbers[ 5 ] is 1002500 + 5 * 8 = 1002540.
 The address of nPtr -= 4 is 1002540 - 4 * 8 = 1002508.
 The value at that location is 1.1.
