#include <iostream>

using std::cout;
using std::endl;

int tripleCallByValue( int );
void tripleCallByReference( int & );
                                                   
int main()
{
   int x = 2, z = 4;

   cout << "x = " << x << " pred tripleCallByValue\n"
        << "Vrednost vratena od tripleCallByValue: "
        << tripleCallByValue( x ) << endl
        << "x = " << x << " po tripleCallByValue\n" << endl;

   cout << "z = " << z << " pred tripleCallByReference" << endl;
   tripleCallByReference( z );
   cout << "z = " << z << " po tripleCallByReference" << endl;

   return 0;
} // kraj na main

int tripleCallByValue( int a )
{
   return a *= 3;   // povikuvachkiot argument ne e modificiran
} // kraj na funkcijata squareByValue

void tripleCallByReference( int &cRef )
{
   cRef *= 3;    // povikuvachkiot argument e modificiran
} // kraj na funkcijata squareByReference
