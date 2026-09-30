#include <iostream>
using namespace std;
int fact ( int x )
{
    int fac = 1 ;
    for ( int i = x ; i > 1 ; i-- )
      fac *= i ; 
    return fac ;
}
int main()
{
    cout << "Enter n and r : " ;
    int n,r;
    cin >> n >> r ;
    int ncr = fact ( n ) / ( fact ( r ) * fact ( n - r)) ;
    cout << "ncr = " << ncr ;
}