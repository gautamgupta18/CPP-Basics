#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int m, n ;
    cout << "Enter rows and column of first matrix :" ;
    cin >> m >> n;
    vector<vector<int>> a ( m, vector<int> (n,0)) ;
    cout << "Enter " << m * n << " Elements :" ;
    for ( int i = 0 ; i < m ; i++ )
        for ( int j = 0 ; j < n ; j++)
        cin >> a[i][j] ;

    int p, q ;
    cout << "Enter rows and column of second matrix :" ;
    cin >> p >> q;
    vector<vector<int>> b ( p, vector<int> (q,0)) ;
    cout << "Enter " << p * q << " Elements :" ;
    for ( int i = 0 ; i < p ; i++ )
        for ( int j = 0 ; j < q ; j++)
        cin >> b[i][j] ;
    
    if ( p != n)
    {
        cout << "Multliplication not possible ..." ;
        return 0;
    }

    cout << "Matrix A = \n";
    for ( int i = 0 ; i < m ; i++ )
    {
        for ( int j = 0 ; j < n ; j++)
         cout << a[i][j] << " ";
        cout << endl ;
    }

    cout << "Matrix B = \n";
    for ( int i = 0 ; i < p ; i++ )
    {
        for ( int j = 0 ; j < q ; j++)
         cout << b[i][j] << " ";
         cout << endl ;
    }
    
    vector<vector<int>> res ( m, vector<int> (q,0)) ;
    for ( int i = 0 ; i<m ; i++)
    for ( int j = 0 ; j<q ; j++)
    for ( int k = 0 ; k<n ; k++)
    res[i][j] += a[i][k] * b[k][j];
    
    cout << " Resultant matrix A * B = \n";
    for ( int i = 0 ; i < m ; i++ )
    {
        for ( int j = 0 ; j < q ; j++)
         cout << res[i][j] << " ";
         cout << endl ;
    }
}