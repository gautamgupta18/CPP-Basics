// Plus sign pattern
#include<iostream>
using namespace std;
int main()
{
    int n ;
    cout << "Enter a odd number :";
    cin >> n ;
    if ( n % 2 != 0)
    for ( int i = 1 ; i <= n ; i++)
    {
        cout << endl ; 
        for ( int j = 1 ; j <= n ; j++ )
        {
            if ( i == ( n + 1 ) / 2 || j == ( n + 1 ) / 2 )
             cout << "* " ;
            else
            cout << "  " ;
        }
    }
}
//      *
//      *
//  * * * * * 
//      * 
//      * 