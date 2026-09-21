#include <iostream>
using namespace std ;
int main()
{
    int a , r , n ;
    cout << "Enter first term of GP:";
    cin >> a ;
    cout << "Enter the common Multiple:";
    cin >> r ;
    cout << "Enter the numer of terms in GP:";
    cin >> n ;
    int x = a ;
    for ( int i = 1 ; i <= n ; i++ )
    {
        cout << x << " " ;
        x *= r ;
    }
}