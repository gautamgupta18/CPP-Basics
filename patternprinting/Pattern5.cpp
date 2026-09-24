// alphabet rectangle pattern 2
#include<iostream>
using namespace std;
int main()
{
    int r , c ;
    cout << "Enter numbers of rows and column :";
    cin >> r >> c ;
    for ( int i = 1 ; i <= r ; i++)
    {
        cout << endl ; 
        for ( int j = 1 ; j <= c ; j++ )
        {
            if ( i % 2 == 0)
              cout << ( char ) ( j + 96 ) << " " ;
            else
              cout << ( char ) ( j + 64 ) << " " ;
        }
    }
}
// A B C D
// a b c d
// A B C D