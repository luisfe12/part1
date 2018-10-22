#include <iostream>

using namespace std;

int main()
{
     For each of the following, write a single statement that performs the specified task. Assume thatfloating-pointvariables number1 and number2 havebeendeclaredandthat number1 hasbeeninitialized to 7.3.
     a) Declare the variable fPtr to be apointer to an object of type double and initialize the pointer to nullptr.

      double *fPtr = nullptr;

     b) Assign the address of variable number1 to pointer variable fPtr.

     fPtr = &number1;

     c) Display the value of the object pointed to by fPtr.

     cout << "The value of *fPtr is " << *fPtr << endl;

     d) Assign the value of the object pointed to by fPtr to variable number2.

     number2 = *fPtr;

     e) Display the value of number2.

     cout << "The value of number2 is " << number2 << endl;

     f) Display the address of number1.

     cout << "The address of number1 is " << &number1 << endl;

     g) Display theaddressstoredin fPtr.Istheaddressdisplayedthesameasthatof number1?

     cout << "The address stored in fPtr is " << fPtr << endl;
     Yes, the value is the same

}
