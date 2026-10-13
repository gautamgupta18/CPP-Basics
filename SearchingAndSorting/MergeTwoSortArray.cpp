#include <iostream>
#include <vector>
using namespace std ;
int main()
{
    vector<int> a = { 10, 30, 40, 60, 80 ,90 } ;
    vector<int> b = { 20, 50 , 70 ,100 } ;
    vector<int> c = {} ;
    int i = 0 , j = 0;
    while ( i < a.size() && j < b.size() )
    {
        if ( a[i] < b[j] )
            c.push_back( a[i++] ) ;
        else
            c.push_back( b[j++] );
    }
    while ( i < a.size())
      c.push_back(a[i++]) ;
    while ( j < b.size())
      c.push_back(b[j++]) ;
    for( int k = 0 ; k < c.size() ; k++ )
    cout << c[k] << " " ;
}