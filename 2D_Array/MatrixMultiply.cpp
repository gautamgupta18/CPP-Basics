#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<vector<int>> a = { { 1, 2, 3 }, {3, 5, 2}, { 8, 4, 3}} ;
    vector<vector<int>> b = { { 3, 9, 3 }, {5, 7, 2}, { 6, 3, 8}} ;
    vector<vector<int>> res ( 3, vector<int> (3,0)) ;

    cout << "A = \n";
    for ( int i = 0 ; i < 3 ; i++ )
    {
        for ( int j = 0 ; j < 3 ; j++)
         cout << a[i][j] << " ";
        cout << endl ;
    }

    cout << "B = \n";
    for ( int i = 0 ; i < 3 ; i++ )
    {
        for ( int j = 0 ; j < 3 ; j++)
         cout << b[i][j] << " ";
         cout << endl ;
    }

    for ( int i = 0 ; i<3 ; i++)
    for ( int j = 0 ; j<3 ; j++)
    for ( int k = 0 ; k<3 ; k++)
    res[i][j] += a[i][k] * b[k][j];
    
    cout << "A * B = \n";
    for ( int i = 0 ; i < 3 ; i++ )
    {
        for ( int j = 0 ; j < 3 ; j++)
         cout << res[i][j] << " ";
         cout << endl ;
    }
}