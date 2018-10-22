#include <iostream>

using namespace std;

int main()
{


    2--State whether the following are true or false.  If theanswer is false, explain why.
    a) The address operator ”&” can be applied only to constants and to expressions.
    FALSE(The  operand  of  the  address  operator  must  be  an  lvalue;  the  addressoperator cannot be applied to constants or to expressions that do not result inreferences)
    b) A pointer that is declared to be of type void * can be dereferenced.
    FALSE( Apointer to void cannot be dereferenced.  Such a pointer does not have a type thatenables thecompiler to determine the number of bytes of memory to dereferenceand the type of the data to which the pointer points)
    c)  A  pointer  of  one  type  can’t  be  assigned  to  one  of  another  type  without  acast operation.
    ALSE( Pointers of any type can be assigned to void pointers.Pointers of type void can be assigned to pointers of other types only with anexplicit type cast
}
