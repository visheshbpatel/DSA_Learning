#include <iostream>
using namespace std;
int main()
{
    cout<<"Namaste Duniya :-)"<<endl;
    cout<<"vbp:-)"<<'\n';
    cout<<"learning DSA:-)\n";
    cout<<"\n";
    
    /*
    cout -> used to print
    endl -> newline or enter
    /n   -> enter
    ;    -> to end line
    */
   
}



/*

1. #include <iostream>
    this is a preprocessor directive(instruction to preprocessor) in c++ which tells the compiler to include content of isostream
    before compiling the program which includes cin(input), cout(output), etc. without this if we try
    to use cin and cout we will get compier error, saying they are undefined.

2. using namespace std;
    this line tells the comppier to use the std namespace by default. in c++ standard library features like cout, cin ,sting etc live inside the std namespace.
    think of it a box which holds all this. The c++ standard library (things like cout, cin, vector, strig) is storde in a namespace called std.
    Thats why we write: std::cout<<"Namaste";

3. << and >>

    1. in output and input
        << - insertion operator
            sends data into the output stream(cout).

        >> Extraction operator
            Takes data out of the input stream(cin).
    
    2. In bitwise operations
        << - left shift
            Shifts the bits of a number to the left(multiplies by powers of 2).

        >> - Right shift
            Shifts the bit of a number to the right(divide by power of 2).

*/