#include <iostream>
using namespace std;
int power( int x , int y ) {
    if ( y == 0 || x == 1 )  return 1 ;
    return x * power( x , y-1 ) ;
}
int main()
{
    int a , b ;
    cout << "Enter positive number and power of the number:" ;
    cin >> a >> b ;
    cout << power(a , b ) ;
}