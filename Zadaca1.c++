#include <iostream>

using std::cout;
using std::cin;
using std::endl;

inline double circleArea ( const double r ) { return r * r * 3.14; }

int main()
{
  double radius;

   	  cout << "Vnesi radius  "<<endl;
      cin >> radius;
      cout << "Povrshina na krugot  so radius " 
           << radius << " e " << circleArea( radius ) << endl;
   

   return 0;
} 
