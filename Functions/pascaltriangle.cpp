#include <iostream>
using namespace std;
int fact ( int x )
{
    int fac = 1 ;
    for ( int i = x ; i > 1 ; i-- )
      fac *= i ; 
    return fac ;
}
int ncr ( int n , int r )
{
    int n_c_r = fact ( n ) / ( fact ( r ) * fact ( n - r)) ;
    return n_c_r ;
}
int main()
{
    int n ;
    cout << "Enter number of rows:" ;
    cin >> n ;
    for ( int i = 0 ; i <= n ; i++ )
    {
        cout << endl ;
        for ( int j = n - i ; j >= 1 ; j--)
          cout << "   " ;
        for ( int j = 0 ; j <= i ; j++ )
          cout << ncr ( i , j ) << "    " ;
    }
}
// output:
// Enter number of rows:5

//                1    
//             1    1    
//          1    2    1    
//       1    3    3    1    
//    1    4    6    4    1    
// 1    5    10    10    5    1  