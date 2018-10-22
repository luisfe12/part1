#include <iostream>

using namespace std;

int main()
{
    Find the error in each of the following program segments. Assume the following declarations and statements:
        int *zPtr; // zPtr will reference built-in array z
        void *sPtr = nullptr;
        int number;
        int z[ 5 ] = { 1, 2, 3, 4, 5 };

    a) ++zPtr;

    Error: zPtr has not been initialized.
    Correction: Initialize zPtr with zPtr = z;

    b) // use pointer to get first value of a built-in array
    number = zPtr;

    Error: The pointer is not dereferenced.
    Correction: Change the statement to number = *zPtr;

    c) // assign built-in array element 2 (the value 3) to number
    number = *zPtr[ 2 ];

    Error: zPtr[ 2 ] is not a pointer and should not be dereferenced.
    Correction: Change *zPtr[ 2 ] to zPtr[ 2 ].

    d) // display entire built-in array z
    for ( size_t i = 0; i <= 5; ++i )
        cout << zPtr[ i ] << endl;

     Error: Referring to a built-in array element outside the built-in array’s bounds with pointer subscripting.
     Correction: To prevent this, change the relational operator in the for statement to < or change the 5 to a 4.

    e) // assign the value pointed to by sPtr to number
        number = *sPtr;

    Error: Dereferencing a void pointer.
    Correction: To dereference the void pointer,i t must first be cast to an integer pointer. Change the statement to number =*static_cast< int*>( sPtr );

    f) ++z;

     Error: Trying to modifyabuilt-in array’s name with pointer arithmetic.
     Correction: Useapointer variable instead of the built-in array’s name to accomplish pointer arithmetic, or subscript the built-in array’s name to refer to a specificelement.


}
