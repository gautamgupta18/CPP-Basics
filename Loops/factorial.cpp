#include <iostream>
using namespace std ;
int main()
{
    int n ;
    long long fact = 1 ;
    cout << "Enter a number to find Factorial :";
    cin >> n ;
    for ( int i = n ; i > 1 ; i-- )
        fact *= i ;

    if ( n >= 0 )
     cout << "Factorial = " << fact ;
    else
     cout << "Factorial of negative numbers is undefined";
}