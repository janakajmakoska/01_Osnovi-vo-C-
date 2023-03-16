#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int min(int a, int b)
{
    if (a< b)
    return a;
    else
    return b;

}
int main ()
{
    int a,b;
    cout<<"Vnesi dva broevi"<<endl;
    cin >>a;
    cin>>b;
    cout<<"Pomal broj e" <<
    min (a,b);
    
    return 0;
}