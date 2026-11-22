#include <iostream>
using namespace std;
int HCF( int a , int b ) 
{
    if ( a == 0)  return b ;
    return HCF( b % a , a) ;
}
int main()
{
    int a, b ;
    cout << "Enter two natural number:";
    cin >> a >> b ;
    cout <<"HCF = " <<HCF(a,b) ;
} 