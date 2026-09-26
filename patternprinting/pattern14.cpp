#include<iostream>
using namespace std;
int main()
{
    int n ;
    cout << "Enter number of Rows:" ;
    cin >> n ;
    for ( int i = 1 ; i <= n ; i++ )
    {
        cout << endl ;
        for ( int j = 1 ; j <= n ; j++ )
           if ( i + j > n)
             cout << "* " ;
           else
             cout << "  ";
    }
}

//         * 
//       * * 
//     * * * 
//   * * * * 
// * * * * * 