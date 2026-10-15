#include <iostream>
using namespace std ;
int main()
{
    cout << "Enter Number of rows and column:";
    int m, n;
    cin >> m >> n;

    int arr[m][n] ;
    cout << "Enter " <<m*n << " elements:" ;
    for ( int i = 0 ; i < m ; i++)
      for ( int j = 0 ; j < n ; j++ )
        cin >> arr[i][j]  ;
    
    for ( int i = 0 ; i < m ; i++)
    {
      for ( int j = 0 ; j < n ; j++ )
        cout << arr[i][j] << " " ;
    cout << endl ;
    }
    
    cout << "Snake pattern\n";
    for ( int i = 0 ; i < m ; i++)
    {
    for ( int j = 0 ; j < n ; j++ )
        cout << arr[i][j] << " " ;
    i++ ;
    if ( i < 3)
    for ( int j = n - 1 ; j >= 0 ; j-- )
        cout << arr[i][j] << " " ;
    }
}