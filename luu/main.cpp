#include <iostream>

using namespace std;

int main()
{
    int r = 2147483646;
    int p = r+1;

    cout << p << endl;
    p= p+1;
    cout << p << endl;
    return 0;
}
