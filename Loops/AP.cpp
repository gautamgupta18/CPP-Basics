#include <iostream>
using namespace std ;
int main()
{
    int a , d , n ;
    cout << "Enter first term of AP:";
    cin >> a ;
    cout << "Enter the common difference:";
    cin >> d ;
    cout << "Enter the numer of terms in AP:";
    cin >> n ;
    int x = a ;
    for ( int i = 1 ; i <= n ; i++ )
    {
        cout << x << " " ;
        x += d ;
    }
}
