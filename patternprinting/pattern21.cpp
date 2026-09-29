#include<iostream>
using namespace std;
int main()
{
    int n ;
    cout << "Enter a number:" ;
    cin >> n ;
    int a , b ;
    for ( int i = 1 ; i <= 2 * n - 1 ; i++ )
    {
        cout << endl ;
    for ( int j = 1 ; j <= 2 * n - 1 ; j++ )
    {
        a = i ;
        b = j;
        if ( a > n)
         a = 2 * n - i ;
        if ( b > n)
         b = 2 * n - j ;
        cout << min ( a , b) << " ";
    }
}
}
// 1 1 1 1 1 1 1 1 1 
// 1 2 2 2 2 2 2 2 1 
// 1 2 3 3 3 3 3 2 1 
// 1 2 3 4 4 4 3 2 1 
// 1 2 3 4 5 4 3 2 1 
// 1 2 3 4 4 4 3 2 1 
// 1 2 3 3 3 3 3 2 1 
// 1 2 2 2 2 2 2 2 1 
// 1 1 1 1 1 1 1 1 1 