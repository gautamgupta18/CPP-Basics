//Star triangle pattern 2
#include<iostream>
using namespace std;
int main()
{
    int n ;
    cout << "Enter number of column:" ;
    cin >> n ;
    for ( int i = 1 ; i <= n ; i++ )
    {
        cout << endl ;
        for ( int j = i ; j <= n ; j++ )
          cout << "* " ;
    }
}
// * * * * *
// * * * * 
// * * *
// * *
// *
