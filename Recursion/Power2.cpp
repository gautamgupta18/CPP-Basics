#include <iostream>
using namespace std;
int power( int x , int y ) {
    if ( y == 0 || x == 1 )  return 1 ;
    int p = power(x , y/2) ;
    if (y % 2 == 0 )  return p * p ;
    else  return p * p * x ;
}
int main()
{
    int a , b ;
    cout << "Enter positive number and power of the number:" ;
    cin >> a >> b ;
    cout << power( a,b ) ;
} 