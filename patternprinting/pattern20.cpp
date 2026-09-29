#include<iostream>
using namespace std;
int main()
{
    int n ;
    cout << "Enter number of Rows:" ;
    cin >> n ;
    for ( int i = 1 ; i <= 2 * n - 1 ; i++ )
       cout << "* " ;
    for ( int i = 1 ; i <= n - 1 ; i++ )
    {
        cout << endl ;
        for ( int j = i ; j <= n -1 ; j++ )
          cout << "* " ;
        
        for ( int j = 1 ; j <= 2 * i -1 ; j++ )
          cout << "  " ;
        
        for ( int j = i ; j <= n - 1 ; j++ )
          cout << "* " ;   
    }
}
// * * * * * * * * * * * * * 
// * * * * * *   * * * * * * 
// * * * * *       * * * * * 
// * * * *           * * * * 
// * * *               * * * 
// * *                   * * 
// *                       *  