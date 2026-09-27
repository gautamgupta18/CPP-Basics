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
        for ( int j = i ; j <= n-1 ; j++ )
          cout << "  " ;
        for ( int k = 1 ; k <= i ; k++)
          cout << k << " " ;
    }
}
/*
 One more method
for ( int i = 1 ; i <= n ; i++ )
{
cout << endl ;
        int k = 1 ;
        for ( int j = 1 ; j <= n ; j++ )
           if ( i + j > n)
             cout << k++  << " " ;
           else
             cout << "  ";
}
*/
//         1 
//       1 2 
//     1 2 3 
//   1 2 3 4 
// 1 2 3 4 5 