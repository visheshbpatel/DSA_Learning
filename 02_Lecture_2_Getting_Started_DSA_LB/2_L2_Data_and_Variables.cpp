#include <iostream>
using namespace std;
int main()
{
    int a = 123;
    cout<< a << endl;

    char b = 'v';
    // char b = 'ab'; not correct , double char not allowed
    cout<< b << endl;

    bool b1 = true;
    cout<< b1 << endl;

    float f = 1.2;
    cout<< f << endl;

    double d = 1.23;
    cout<< d << endl;

    int size_a = sizeof(a);
    cout<<"Size of a is: "<<size_a<<endl;

    int size_d = sizeof(d);
    cout<<"Size of d is: "<<size_d<<endl;
   
}


/*

Variable - A named memory location with a specfic type that stored some value.
int score = 95;
value = 95
type = int
name = value
memory location = some address in RAM where 95 is stored.

*/
