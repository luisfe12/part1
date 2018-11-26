#include <iostream>

using namespace std;
class entero{
public:
    int a;
};
entero operator +(entero &p, entero &q){
    entero r;
    r.a=p.a+q.a;


}
int main()
{
    entero pri, se,r;
    pri.a=12;
    se.a=6;
    r=pri+se;
    cout<<r.a<<endl;
}
