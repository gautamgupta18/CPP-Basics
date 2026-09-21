#include <iostream>
using namespace std ;
int main()
{
    int n ;
    cout << "Enter nth number to print:" ;
    cin >> n ;
    cout << "Even number between 1 to " << n << ":" << endl ;
    for ( int i = 1 ; i <= n ; i++)
       if ( i % 2 == 0)
         cout << i << " " ;
}