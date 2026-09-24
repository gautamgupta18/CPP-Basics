// floyd's triangle pattern 1
#include<iostream>
using namespace std;
int main()
{
    int n ;
    cout << "Enter number of rows:" ;
    cin >> n ;
    int p = 1;
    for ( int i = 1 ; i <= n ; i++ )
    {
        cout << endl ;
        for ( int j = 1 ; j <= i ; j++ )
          cout << p++ << " ";
    }
}
// 1 
// 2 3 
// 4 5 6 
// 7 8 9 10 